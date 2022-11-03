#include "main.h"

/**
  * prime_checker - determines if a number is a prime number
  * @i: first integer
  * @j: second integer.
  * Return: 1, 0, or prime number
  */
int prime_checker(int i, int j)
{
	if (i % j == 0)
	{
		if (i == j)
			return (1);
		else
			return (0);
	}
	return (prime_checker(i, j + 1));
}

/**
  * is_prime_number - determines if an integer is a prime number
  * @n: input integer
  * Return: 1 if number is prime, 0 otherwise
  */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 0)
		return (0);
	if (n == 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	else
		return (prime(n, i));
}
