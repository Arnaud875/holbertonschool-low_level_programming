#include <stdio.h>
#include <string.h>

/**
 * main - y
 * Return: yes
 */
int main(void)
{
char a;

for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}

for (a = 'A'; a <= 'Z'; a++)
{
putchar(a);
}

putchar('\n');

return (0);
}
