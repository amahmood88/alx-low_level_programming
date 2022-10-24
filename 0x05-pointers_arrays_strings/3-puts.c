#include "main.h"

/**
  * _puts - prints a string a a trailing newline to stdout
  * @str: pointer to a string
  */
void _puts(char *str)
{
	int i, len;

	i = 0;
	while (str[i] != '\0')
		i++;
	len = i;
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
