#!/bin/bash

# Get all the .c files in the current directory
files=$(find . -maxdepth 1 -type f -name "*.c")

# Compile and create the object files
for file in $files
do
	gcc -c -fPIC $file -o ${file%.c}.o
    done
    gcc -shared -o liball.so *.o
    rm *.o
