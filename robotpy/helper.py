import json
import re

''' Helper functions '''

def countLeadingSpaces(a):
    return len(a) - len(a.lstrip())

def printAsJSON(thing):
    print json.dumps(thing, indent=2, separators=(',', ': '))

def containsOperation(assignment):
    if '+' in assignment or '-' in assignment or '*' in assignment or '/' in assignment or '%' in assignment or '**' in assignment:
        return True
    else:
	return False

def constantTypeAssignment(assignment):
    if re.match('^\d+$',assignment): # constant int assign
        return 'int'
    if re.match('^\d+\.\d+$',assignment): # constant float assign
	return 'float'
    if re.match('^\".*\"$',assignment): # constant string assign
	return 'string'
    if re.match('^true|false$',assignment): # constant bool assign
	return 'bool'