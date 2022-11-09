#include "main.h"

/**
  * _memcpy - copies n memory area to dest
  * @dest: destination buffer where n bytes are copied
  * @src: source buffer from where n bytes are copied
  * @n: n bytes copied
  * Return: returns dest buffer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
