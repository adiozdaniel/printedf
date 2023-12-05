#include "main.h"

#define UPP(x)((digit < 10) ? digit + '0' : digit - 10 + 'A')
#define LOW(x)((digit < 10) ? digit + '0' : digit - 10 + 'a')
#define CAS(case, digit)((case == 2) ? UPP(digit):LOW(digit))

/**
 * print_unsigned_hex - Convert a string character
 * @n: input
 * @_case: _case-insensitive
 */
void print_unsigned_hex(unsigned int n, int _case)
{
	char buffer[32];
	int i, j, digit;

	i = 0;
	while (n != 0)
	{
		digit = n % 16;
		buffer[i++] = CAS(_case, digit);
		n /= 16;
	}

	for (j = i - 1; j >= 0; j--)
		_putchar(buffer[j]);
}
