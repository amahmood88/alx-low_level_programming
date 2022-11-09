#!/bin/bash

sudo gcc -Wall -Wextra -Werror -c *.c  

sudo ar rcs libmy.a *.o

ar -t libmy.a
