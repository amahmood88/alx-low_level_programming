#include "main.h"

/**
  * _strcmp - compares the length of 2 strings and returns -1, 0 or 1
  * if the first is less than, rqual to, or greater than
  * the second respectively.
  * @s1: first string
  * @s2: second string
  * Return: -1, 0, or 1
  */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
		s1++, s2++;
	return (*s1 - *s2);
}




