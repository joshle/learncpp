#!/usr/bin/env python

import os,sys
from ctypes import *

pycpp_lib_file = os.path.join(sys.path[0], "libpycpp.so")
pycpp = cdll.LoadLibrary(pycpp_lib_file)

print "3 + 8 = %d " % pycpp.myadd(3, 8)
