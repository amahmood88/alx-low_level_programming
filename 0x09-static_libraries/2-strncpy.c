/**
  * _strncpy - copies a string from src to the buffer destination dest
  * @dest: destination buffer to copy to
  * @src: string to be copied
  * @n: copy up to n characters
  * Return: returns copied strings in buffer dest
  */
char *_strncpy(char *dest, const char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
