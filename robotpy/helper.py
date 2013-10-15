''' 
This module consists of several functions that assist in the analysis of input code
'''

import json
import re

def countLeadingSpaces(a):
    ''' Counts the leading spaces in a string '''
    return len(a) - len(a.lstrip())

def printAsJSON(thing):
    ''' Prints an object as nice formatted JSON console output. For purposes of debugging '''
    print json.dumps(thing, indent=2, separators=(',', ': '))

def containsOperation(assignment):
    ''' Checks to see if an assignment contains an expression (expression operators) ''' 
    if '+' in assignment or '-' in assignment or '*' in assignment or '/' in assignment or '%' in assignment or '**' in assignment:
        return True
    else:
	return False

def constantTypeAssignment(assignment):
    ''' Scans a constant assignment and determines assignment type via regex '''
    if re.match('^\d+$',assignment): # constant int assign
        return 'int'
    if re.match('^\d+\.\d+$',assignment): # constant float assign
	return 'float'
    if re.match('^\".*\"$',assignment): # constant string assign
	return 'string'
    if re.match('^true|false$',assignment): # constant bool assign
	return 'bool'
