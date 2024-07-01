#include <stdio.h>
#include <stdlib.h>

/**
 * main - Add positive numbers
 * @argc: number of arguments
 * @argv: command line arguments
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	int i = 0, r = 0;

	if (argc < 1)
	{
		printf("0");
		return (-1);
	}

	for (i = 1; i < argc; i++)
	{
		if (argv[i][0] < '0' || argv[i][0] > '9')
		{
			printf("Error\n");
			return (-1);
		}
		r += atoi(argv[i]);
	}

	printf("%d\n", r);
	return (0);
}
