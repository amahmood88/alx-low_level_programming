#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int len = 0;
	while (len < 10)
	{
		
		ch = 'a';

		while (ch <= 'z')
		{	
			_putchar(ch);
			ch++;
		}	

		_putchar('\n');
	}
}
