#include "main.h"

/**
  * reverse_array - reverse the order of an array
  * @a: array to be reversed
  * @n: size of array
  */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = n - 1;
	while (i >= n / 2)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
		i--;
	}
}
