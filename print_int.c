#include "main.h"
#define INT(x)((x < 10) ? x + '0' : x - 10 + 'A')

/**
 * print_int - Convert a string character
 * @n: number
 * @base: base
 */
void print_int(int n, int base)
{
	char buffer[32];
	int i = 0, j;
	int is_negative = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0 && base == 10)
	{
		is_negative = 1;
		n = -n;
	}

	while (n != 0)
	{
		int digit = n % base;

		buffer[i++] = INT(digit);
		n /= base;
	}

	if (is_negative)
		buffer[i++] = '-';

	for (j = i - 1; j >= 0; j--)
		_putchar(buffer[j]);
}
