import json

''' Helper functions '''

def countLeadingSpaces(a):
    return len(a) - len(a.lstrip())

def printAsJSON(thing):
    print json.dumps(thing, indent=2, separators=(',', ': '))
    
