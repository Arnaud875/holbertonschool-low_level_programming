#include <stdio.h>
#include <string.h>

/**
 * main - y
 * Return: yes
 */
int main(void)
{
const char *a = "abcdefghijklmnopqrstuvwxyz\n";
for (char c = 0; c < strlen(a); c++)
{
putchar(a[c]);
}

return (0);
}
