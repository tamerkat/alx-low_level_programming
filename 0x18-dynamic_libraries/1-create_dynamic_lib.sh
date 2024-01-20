#!/bin/bash
gcc -c -Wall -pedantic -Werror -fPIC -c *.c
gcc -shared *.o liball.so
