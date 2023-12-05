#include "main.h"
#define OCT(x)((x < 10) ? x + '0' : x - 10 + 'a')

/**
 * intToString - Convert a string character
 * @n: number
 * @str: string
 * @base: base
 */
void intToString(unsigned int n, char *str, int base)
{
	int i, digit;

	i = 0;
	if (n == 0)
		str[i++] = '0';

	while (n > 0)
	{
		digit = n % base;
		str[i++] = OCT(digit);
		n /= base;
	}

	str[i] = '\0';
	reverseString(str);
}
