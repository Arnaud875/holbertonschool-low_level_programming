#include <stdio.h>

/**
 * main - Print all arguments
 * @argc: number of arguments
 * @argv: command line arguments
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
