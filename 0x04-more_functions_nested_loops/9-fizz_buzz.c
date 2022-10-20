#include <stdio.h>i
#include "main.h"

/**
  * main - prints fizz/buzz/fizzbuzz for multiples of 3/5/15 respectively
  *Return: 0 always
  */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{printf("%d", i);
			printf(" ");
		}
	}
	_putchar('\n');
	return (0);
}
