/**
 * _isupper - function to check for upper case letter from [A-Z]
 * @c: input of type char
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
