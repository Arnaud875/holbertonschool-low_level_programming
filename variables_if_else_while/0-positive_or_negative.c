#include <stdio.h>
#include <stdlib.h>

/**
 * main - y
 */
int main(void)
{
int n;

srand(time(0));

n = rand();

if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n >= 1)
{
printf("%d is positive\n", n);
}
else
{
printf("%d is negative\n", n);
}

return (0);
}
