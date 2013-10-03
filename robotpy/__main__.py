import sys
import re

''' Constants '''

ARGC = len(sys.argv)
NEW_LINE = '\n'
POUND = '#'

''' Helper functions '''

def countLeadingSpaces(a):
    return len(a) - len(a.lstrip())

''' Translate function '''

def translate():
    
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
		    funcbody.append(lines[q].lstrip())
		    q = q + 1
		    if q == maxlines:
			break

	    funcpack.append(funcbody)
	    functions.append(funcpack)

    # Print out the functions

    for function in functions:
        print "FUNCTION DEFINITION: " + function[0]
        for line in function[1]:
            print "FUNCTION BODY: " + line

    
''' Code for running the command line stuff '''

if ARGC > 1:
    FILENAME = sys.argv[1]
    translate()
else:
    pass
