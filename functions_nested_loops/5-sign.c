#include "main.h"


/**
 * print_sign - y
 * @n: number of yes
 * Return: yes
 */
int print_sign(int n)
{
if (n == 0)
{
write(1, "0", 1);
return (0);
}
else if (n > 0)
{
write(1, "+", 1);
return (1);
}
else
{
write(1, "-", 1);
return (-1);
}
}
