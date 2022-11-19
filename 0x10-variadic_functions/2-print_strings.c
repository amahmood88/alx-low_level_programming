#include <stdarg.h>
#include <stdio.h>

/**
  * print_strings - function that prints strings, followed by a new line.
  * @separator: pointer to a character
  * @n: number of input arguments
  * @...: variable number of arguments
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, char *));
		if (i != n - 1)
		{
			printf("%c ", *separator);
		}
		else if (separator == NULL)
			printf("(nil)");
	}
	va_end(ap);
	printf("\n");
}
