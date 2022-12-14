/**
  * print_name - function that prints a name
  * @name: pointer to a char
  * @f: pointer to a function
  */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
