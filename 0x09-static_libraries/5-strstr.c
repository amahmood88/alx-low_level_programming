#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to find
 * Return: return pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *i, *j;

	while (*haystack != '\0')
	{
		i = haystack;
		j = needle;
		while (*j != '\0' && *haystack != '\0' && *j == *haystack)
			j++, haystack++;
		if (!*j)
			return (i);
		haystack = i + 1;
	}
	return (0);
}
