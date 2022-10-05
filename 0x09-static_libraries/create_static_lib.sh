#!/bin/bash
gcc -c -Wall -pedantic -Werror -Wextra *.c
ar -rc libmy.a *.o
ranlib libmy.a
