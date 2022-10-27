#include "main.h"

char *strcat(char *dest, const char *src)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < dest_len && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
