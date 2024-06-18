#include <stdio.h>
#include <string.h>

/**
 * main - y
 * Return: yes
 */
int main(void)
{
const char *a = "abcdefghijklmnopqrstuvwxyz";
size_t i;

for (i = 0; i < strlen(a); i++)
{
putchar(a[i]);
}

putchar('\n');

return (0);
}
