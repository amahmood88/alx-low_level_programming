#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of two diagonals of a matrix
 * @a: pointer.
 * @size: matrix size
 */
void print_diagsums(int *a, int size)
{
	int i;
	int s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[i];
		a = a + size;
	}

	a = a - size;

	for (i = 0; i < size; i++)
	{
		s2 = s2 +  a[i];
		a = a - size;
	}

	printf("%d, %d\n", s1, s2);
}
