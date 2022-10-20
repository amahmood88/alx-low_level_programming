#include "main.h"
/**
  * print_diagonal - prints \ along the diagonal
  * @n: number of \ to print
  */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				_putchar(' ');
				if (i == j)
					_putchar('\\');
			}
			_putchar('\n');
		}
	}
	_putchar('\n')
}
