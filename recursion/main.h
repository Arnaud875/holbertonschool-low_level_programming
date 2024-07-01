#ifndef __GUARD__
#define __GUARD__

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int _putchar(int);

#ifdef __CUSTOM_DEBUG__
const char *get_buffer(void);
void reset_buffer(void);
#endif

void _puts_recursion(char *);

#endif
