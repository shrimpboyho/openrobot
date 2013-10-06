import json

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
