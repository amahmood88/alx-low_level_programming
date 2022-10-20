#include <unistd.h>
/**
  * _putchar - print input character
  * @c: input character
  * Return: returns an int
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


