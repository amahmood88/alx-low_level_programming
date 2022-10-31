/**
  * _memset - fills memory with a constant byte.
  * @s: pointer to a character
  * @b: constant byte
  * @n: first n bytes of buffer
  * Return: none
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
}
