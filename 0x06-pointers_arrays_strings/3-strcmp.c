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
	int len_1, len_2, match;

	len_1 = strlen(s1);
	len_2 = strlen(s2);
	if (len_1 > len_2)
		return (1);
	else if (len_1 == len_2)
		return (0);
	else
		return (-1);
}




