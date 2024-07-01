#include "../recursion/main.h"

#define BUFFER_SIZE 1024

static char output_buffer[BUFFER_SIZE];
static int buffer_index = 0;

int _putchar(int c)
{
	if (buffer_index < BUFFER_SIZE - 1)
	{
		output_buffer[buffer_index++] = c;
		output_buffer[buffer_index] = '\0';
	}
	return write(1, &c, 1);
}

const char *get_buffer()
{
	return output_buffer;
}

void reset_buffer()
{
	buffer_index = 0;
	output_buffer[0] = '\0';
}