#include "main.h"

/**
  * _strlen - counts the length of a string
  * @s: pointer to a string
  * Return: returns the length of the string
  */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


