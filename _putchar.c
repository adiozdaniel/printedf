#include "main.h"

/**
* _putchar - main function
* @c: input character
* Return: character
*/
char _putchar(char c)
{
	return (write(1, &c, 1));
}
