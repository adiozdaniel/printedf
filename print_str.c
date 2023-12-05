#include "main.h"

/**
 * print_str - Convert a string character
 * @str: string
 */
void print_str(char *str)
{
	while (*str)
		_putchar(*str++);
}
