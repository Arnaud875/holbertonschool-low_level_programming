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
if (a == 'q' || a == 'e')
{
continue;
}
putchar(a);
}

putchar('\n');

return (0);
}
