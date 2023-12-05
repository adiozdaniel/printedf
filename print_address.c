#include "main.h"
#define ADDR(x)((x < 10) ? x + '0' : x - 10 + 'a')

/**
 * print_address - print address
 * @n: input
 */
void print_address(unsigned long n)
{
	int leadingZeros, digit;
	size_t i;
	unsigned long mask;

	leadingZeros = 0;
	mask = 1UL << ((sizeof(unsigned long) * CHAR_BIT) - 4);

	while ((n & mask) == 0 && mask != 0)
	{
		leadingZeros++;
		mask >>= 4;
	}

	_putchar('0');
	_putchar('x');

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		for (i = leadingZeros; i < (sizeof(unsigned long) * 2); i++)
		{
			digit = (n >> (4 * (sizeof(unsigned long) * 2 - i - 1)) & 0xF);
			_putchar(ADDR(digit));
		}
	}
}
