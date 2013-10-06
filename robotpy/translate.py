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

    for i, funcpack in enumerate(functions):
	dec = funcpack[0]
	lines = funcpack[1]
	
	# Inherit the global scope
	
	global_scope_inherit = []
	if i != 0:
	    global_scope_inherit = functions[0][2][1]
	
	# Shove global scope into local scope

	for thing in global_scope_inherit:
	    mem_vars_name.append(thing)
	    mem_vars_type.append('GLOBAL')

	# Loop through line by line finding variables

	for line in lines:
	    print "Current Line: " + line
	    
	    # See if there are any int declarations or assignments
	    if re.match('^[^=]+={1}[^=]+$', line):
		variable = line.split('=')[0].strip()
		assignment = line.split('=')[1].strip()
		if variable not in mem_vars_name:
		    print "Found declaration of: " + variable
		    print "Assigned to: " + assignment
		    mem_vars_name.append(variable)
		    
		    # Determine variable type through analysis
		    
		    if re.match('^\d+$',assignment): # constant int assign
			mem_vars_type.append('INT')
	            if re.match('^\d+\.\d+$',assignment): # constant float assign
			mem_vars_type.append('FLOAT')
		    if re.match('^\".*\"$',assignment): # constant string assign
			mem_vars_type.append('STRING')
		    if re.match('^true$',assignment): # constant bool assign
			mem_vars_type.append('BOOL')

        # Pack in the local scope into the function tree

	functions[i].append(["SCOPE",mem_vars_name,mem_vars_type])
	mem_vars_name = []
	mem_vars_type = []


    # Print out the functions
    
    print "==============PRINTING FUNCTION STRUCTURE=============="
    printAsJSON(functions)
