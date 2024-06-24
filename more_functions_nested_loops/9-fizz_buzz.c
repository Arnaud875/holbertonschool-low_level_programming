#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			printf("%s", (i % 15 == 0) ? "FizzBuzz" : (i % 3 == 0) ? "Fizz" : "Buzz");
			printf("%s", i < 100 ? " " : "\n");
			continue;
		}

		printf("%d ", i);
	}

	return (0);
}
