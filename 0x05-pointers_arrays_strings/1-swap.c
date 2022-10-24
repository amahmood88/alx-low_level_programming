#include "main.h"

/**
  *swap_int - swaps the values of two integers passed
  *@x: first integer
  *@y: second integer
  */
void swap_int(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
