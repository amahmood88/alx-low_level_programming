#include "main.h"
/**
  * _strchr - locates character in a string
  * @c: the character to be located
  * @s: the string in which the charater will be found
  * Return: returns c or null
  */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
		return (s + i);
	return ('\0');
}
