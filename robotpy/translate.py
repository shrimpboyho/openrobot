import re
from constants import *
from helper import *
import pprint

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
    maxlines = len(lines)

    for i, line in enumerate(lines):
	print "Current Line: " + line
	if re.match('\s*def\s+.+\(.*\):\s*',line):
	    print "Found function body declaration"
	    funcpack = []
	    funcpack.append(line)
	    funcbody = []

	    # Pack the function's body code

	    q = i + 1
	    
	    if q < maxlines:    
		leading = countLeadingSpaces(lines[q])
	        while countLeadingSpaces(lines[q]) == leading:
		    funcbody.append(lines[q])
		    q = q + 1
		    if q == maxlines:
			break

	    funcpack.append(funcbody)
	    functions.append(funcpack)

    # Print out the functions
    
    print "==============PRINTING FUNCTION STRUCTURE=============="
    pp = pprint.PrettyPrinter(indent=4)
    pp.pprint(functions)

    # Determine the variable types
    
    print "==============FINDING VARIABLES=============="

    mem_vars_name = []
    mem_vars_type = []

    for funcpack in functions:
	dec = funcpack[0]
	lines = funcpack[1]
	
	for line in lines:
	    print "Current Line: " + line
	    # See if there are any int declarations
	    if re.match('.+=\s+\d*', line):
	        print "Found an integer declaration"




