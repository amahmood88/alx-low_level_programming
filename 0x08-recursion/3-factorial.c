#include "main.h"

/**
  * factorial - calculates the factorial of a number
  * @n: input n
  * Return: 1, -1, or calculated factorial
  */

int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
