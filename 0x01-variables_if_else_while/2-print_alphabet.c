#include <stdio.h>
/**
 *main - entry point
 *Return: 0 if successful, !0 otherwise
 */
int main(void)
{
	char c;

	for (c = 'a'; c < 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

