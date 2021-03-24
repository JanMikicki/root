#!/bin/sh
rm -f CMakeCache.txt
/usr/bin/cmake  -DCMAKE_INSTALL_PREFIX="../installdir" /home/diagoras/root_cern/root 
