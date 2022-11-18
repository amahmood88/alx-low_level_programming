#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - function that prints numbers, followed by a new line.
  * @separator: pointer to a character
  * @n: number of input arguments
  * @...: variable number of arguments
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n - 1)
		{
			printf("%c ", *separator);
		}
	}
	va_end(ap);
	printf("\n");
}
