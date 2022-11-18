#include <stdarg.h>

/**
  * sum_them_all - function to sum all input arguments
  * @n: number of input arguments
  * @...: variable number of input arguments
  * Return: sum of input arguments
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}

