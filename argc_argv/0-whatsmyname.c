#include <stdio.h>

/**
 * main - Print the program name
 * @argc: number of arguments
 * @argv: command line arguments
 * Return: 0 if successful
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
