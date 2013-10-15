"""
The entry point for the entire program     
"""

import sys
import pprint
from translate import *
from helper import *
from constants import *

if ARGC > 1:

    ## Contains the filename (first argument)
    FILENAME = sys.argv[1]

    translate(FILENAME)
else:
    pass
