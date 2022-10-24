# include "main.h"

/**
  * puts2 - prints every other character of a string
  * @str: pointer to a string
  */
void puts2(char *str)
{
	int i, len;

	i = 0;
	while (str[i] != '\0')
		i++;
	len = i;
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}

