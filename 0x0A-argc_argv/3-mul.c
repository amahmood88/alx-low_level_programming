#include "main.h"

/**
  * main - entry point
  * @argc: input argument count
  * @argv: string inputs
  * Return: 0 always
  */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
