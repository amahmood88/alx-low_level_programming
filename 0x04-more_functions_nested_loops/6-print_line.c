#include "main.h"
/**
  * print_line - prints line according to input n
  * @n: number of dashes
  */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	else
		_putchar('\n');
}
