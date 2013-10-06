import re
from constants import *
from helper import *

''' Translate function '''

def translate(FILENAME):
    
    # Standard storage containers

    functions = []

    # Get the code

    fp = open(FILENAME, "r")
    raw = fp.read()

    # Split into lines

    lines = raw.split(NEW_LINE)
    lines = filter(None, lines) 
	
    # Remove comments

    lines_without_comments = []
    for line in lines:
	if (line.lstrip())[0] == POUND:
            continue     
        else:
	    lines_without_comments.append(line)

    # Split code into functions
    
    print "==============EXTRACTING FUNCTIONS=============="

    lines = lines_without_comments

    globalarr = []
    globalcon = ['GLOBAL',[]]
    globalpack = globalcon[1]

    for i, line in enumerate(lines):
	print "Current Line: " + line
	maxlines = len(lines)
	if re.match('\s*def\s+.+\(.*\):\s*',line):
	    print "Found function body declaration"
	    funcpack = []
	    funcpack.append(line)
	    funcbody = []

	    # Pack the function's body code

	    i = i + 1
	    
	    if i < maxlines:    
		leading = countLeadingSpaces(lines[i])
	        while countLeadingSpaces(lines[i]) >= leading:
		    funcbody.append(lines[i])
		    del lines[i]
		    maxlines = len(lines)
		    if i == maxlines:
			break


	    funcpack.append(funcbody)
	    functions.append(funcpack)
	    continue
	
        globalpack.append(line)

    functions.insert(0,globalcon)

    # Determine the variable types
    
    print "==============FINDING VARIABLES=============="

    mem_vars_name = []
    mem_vars_type = []
    mem_vars_dec = []

    for i, funcpack in enumerate(functions):
	dec = funcpack[0]
	lines = funcpack[1]
	
	# Inherit the global scope
	
	global_scope_inherit = []
	if i != 0:
	    global_scope_inherit = functions[0][2][1]
	    global_scope_inherit_dec = functions[0][2][3]
	
	# Shove global scope into local scope

	for k, thing in enumerate(global_scope_inherit):
	    mem_vars_name.append(thing)
	    mem_vars_type.append('GLOBAL')
	    mem_vars_dec.append(global_scope_inherit_dec[k])

	# Loop through line by line finding variables

	for lineNumber, line in enumerate(lines):
	    print "Current Line: " + line
	    
	    # See if there are any int declarations or assignments
	    if re.match('^[^=]+={1}[^=]+$', line):
		variable = line.split('=')[0].strip()
		assignment = line.split('=')[1].strip()
		if variable not in mem_vars_name:
		    print "Found declaration of: " + variable
		    print "Assigned to: " + assignment
		    mem_vars_name.append(variable)
		    mem_vars_dec.append(lineNumber)
		    # Determine variable type through analysis
		    
		    if constantTypeAssignment(assignment):
		        mem_vars_type.append(constantTypeAssignment(assignment))

		    # Determine more complex assignments with operators TODO: MAKE THIS ALGORYTHM SMARTER

	            else:
			tokens = re.split('\+|\-|\*|\/|\*\*|%',assignment)
			mem_vars_type.append(constantTypeAssignment(tokens[0].strip()))
			print "Here are the tokens of the assignment expression: " + str(tokens)

        # Pack in the local scope into the function tree

	functions[i].append(["SCOPE",mem_vars_name,mem_vars_type,mem_vars_dec])
	mem_vars_name = []
	mem_vars_type = []
	mem_vars_dec = []


    # Print out the functions
    
    print "==============PRINTING FUNCTION STRUCTURE=============="
    printAsJSON(functions)

    # Convert the intermediate representation to C

    # Create a copy

    dump = functions

    #f = open("output.c", "w")

    # Write down all function prototypes
 
    
