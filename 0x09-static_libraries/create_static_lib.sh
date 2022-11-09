#!/bin/bash

sudo gcc -Wall -Wextra -Werror -c *.c

sudo ar rcs liball.a *.o
