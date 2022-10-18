#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char ch;
	int len;
	for (len=0; len<10; len++)
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
