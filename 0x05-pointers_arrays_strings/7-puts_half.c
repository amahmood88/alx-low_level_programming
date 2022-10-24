#include "main.h"

/**
  * puts_half - function prints half a string
  * @str: pointer to a string
  */
void puts_half(char *str)
{
	int i, len, n;

	i = 0;
	while (str[i] != '\0')
		i++;
	len = i + 1;
	if ((len % 2) != 0)
		n = ((len - 1) / 2);
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
