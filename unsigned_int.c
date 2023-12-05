#include "main.h"

/**
 * print_unsigned_int - for unsigned int
 * @n: input
 */
void print_unsigned_int(unsigned int n)
{
	char buffer[32];
	int i, j, digit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	i = 0;
	while (n != 0)
	{
		digit = n % 10;
		buffer[i++] = digit + '0';
		n /= 10;
	}

	for (j = i - 1; j >= 0; j--)
		_putchar(buffer[j]);
}
