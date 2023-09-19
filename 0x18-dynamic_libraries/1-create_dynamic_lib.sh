#!/bin/bash

# Compile all .c files in the current directory into a shared library
gcc -shared -o liball.so *.c -fPIC
