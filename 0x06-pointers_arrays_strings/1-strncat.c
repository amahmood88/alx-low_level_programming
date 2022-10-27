#include "main.h"

/**
  * _strncat - concatenates two stings into one
  * @dest: string pointer to save concatenated string
  * @src: source string
  * @n: upper limit of loop
  * Return: destination string
 */
char *_strncat(char *dest, const char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
