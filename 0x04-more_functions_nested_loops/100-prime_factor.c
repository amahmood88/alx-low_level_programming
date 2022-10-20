#include <stdio.h>

/**
 * main - entry point
 * Return: 0 if successful
 */
int main(void)
{
	long int i;
	long int j;

	i = 612852475143;
	for (j = 2; j <= i; j++)
	{
		if (i % j == 0)
		{
			i /= j;
			j--;
		}
	}
	printf("%ld\n", j);
	return (0);
}
