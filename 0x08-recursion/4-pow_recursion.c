#include "main.h"

/**
  * _pow_recursion - calculate x raise to power y
  * @x: base
  * @y: power
  * Return: base to power if > 0, 1 otherwise
  */

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
