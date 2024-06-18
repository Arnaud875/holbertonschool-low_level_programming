/**
 * print_sign - y
 * @n: number of yes
 * Return: yes
 */
int print_sign(int n)
{
if (n == 0)
{
putchar('0');
return (0);
}
else if (n > 0)
{
putchar('+');
return (1);
}
else
{
putchar('-');
return (-1);
}
}
