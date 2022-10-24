#include "main.h"

/**
  * print_array - print n elements of an array followed bya newline
  * @a: pointer to an integer
  * @n: size of array
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
