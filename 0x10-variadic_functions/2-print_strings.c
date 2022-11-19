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
	char *container;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		container = va_arg(ap, char *);
		if (container)
			printf("%s", container);
		else
			printf("(nil)");
		if (i < n - 1)
		{
			if (separator)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
