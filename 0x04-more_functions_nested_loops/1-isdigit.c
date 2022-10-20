/**
 * _isdigit - to check for for digit for [0-9]
 * @c: input of type char
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(char c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
