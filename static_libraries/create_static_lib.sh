#!/bin/bash
gcc -wall - pedantic -werror -wextr -c *.c
ar -rc liball.a *.c
