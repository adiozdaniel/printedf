#include "main.h"

/**
 * reverseString - Convert a string character
 * @str: string
 */
void reverseString(char *str)
{
	int length, start, end;
	char temp;

	length = strlen(str);
	start = 0;
	end = length - 1;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}
