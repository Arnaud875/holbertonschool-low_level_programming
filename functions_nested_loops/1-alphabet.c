#include <stdio.h>
#include <unistd.h>

void print_alphabet(void)
{
char a;

for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}

putchar('\n');
}

/**
 * main - y
 * Return: yes
 */
int main(void)
{
print_alphabet();
return (0);
}
