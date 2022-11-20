#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_all - function that prints anything
  * @format: format specifier to print
  */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j, k = 0;
	const char s_arg[] = "cifs";
	char *s;

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (s_arg[j])
		{
			if (format(i) == s_arg[j] && k)
			{
				printf(", ");
				break;
			} 
			j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int)), c = 1;
			break;

		case 'i':
			printf("%d", va_arg(ap, int)), c = 1;
			break;
			
		case 'f':
			printf("%f", va_arg(ap, double)), c = 1;
			break;

		case 's':
			s = va_arg(ap, char *), c = 1;
			if (!s)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		}
		i++;
	}
	printf("\n"), va_end(ap);
}

