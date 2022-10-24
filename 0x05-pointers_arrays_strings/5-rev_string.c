#include "main.h"

/**
  * rev_string - reverses a string
  * @s: pointer to a string
  */
void rev_string(char *s)
{
	char tmp;
	int i, len, len_2;

	len = 0;
	len_2 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len_2 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len_2];
		s[len_2--] = tmp;
	}
}
