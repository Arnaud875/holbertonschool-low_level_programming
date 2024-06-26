#include <stdio.h>
#include <stdlib.h>

/**
 * main - Result of multiplying the first and second arguments
 * @argc: number of arguments
 * @argv: command line arguments
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (-1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
