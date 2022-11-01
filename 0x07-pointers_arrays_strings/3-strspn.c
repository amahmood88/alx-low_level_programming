#include "main.h"
/**
  * _strspn - gets the length of a prefix substring
  * @s: intialization string
  * @accept: gives bytes
  * Return: accepted bytes
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 1;
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] ==  accept[k])
			{
				j = 0;
				break;
			}
		}
		if (j == 1)
		{
			break;
		}
	}
	return (i);
}
