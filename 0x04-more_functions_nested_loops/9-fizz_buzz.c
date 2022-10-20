#include <stdio.h>
/**
  * fizz_buzz - prints fizz/buzz/fizzbuzz for multiples of 3/5/15 respectively
  *@n: number range
  */
void fizz_buzz(int n)
{
	int i;

	for (i = 1; i <= n; i++)
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
}
