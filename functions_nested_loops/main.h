#ifndef _HELLO
#define _HELLO

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - yes
 * @c: yes
 * Return: yes
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int);
int _isalpha(int);
int print_sign(int);
#endif
