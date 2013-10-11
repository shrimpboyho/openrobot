import sys
import pprint
from translate import *
from helper import *
from constants import *

''' Code for running the command line stuff '''

if ARGC > 1:
    FILENAME = sys.argv[1]
    translate(FILENAME)
else:
    pass
