#include <stdio.h>
#include <string.h>

/**
 * main - y
 * Return: yes
 */
int main(void)
{
const char *a = "abcdefghijklmnopqrstuvwxyz\n";
size_t i;

for (i = 0; i < strlen(a); i++)
{
putchar(a[i]);
}

return (0);
}
