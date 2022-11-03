#include "main.h"

/**
  * sqr_two_param - returns the root of a number.
  * @i: first integer
  * @j: second integer
  * Return: -1 or square root
  */
int sqr_two_param(int a, int b)
{
	if ((b * b) == a)
		return (b);
	if (b == a / 2)
		return (-1);
	return (sqr_two_param(a, b + 1) + 0);
}

/**
  * _sqrt_recursion - finds the square root of a number.
  * @n: input integer
  * Return: -1, 1, or the square root value
  */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (sqr_two_param(n, i));
}
