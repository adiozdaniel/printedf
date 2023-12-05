#include "main.h"

/**
 * _printf - printf
 * @format: format
 * Return: formatted string
 */
int _printf(const char *format, ...)
{
    int printed_chars = 0;
    va_list args;
    va_start(args, format);

    while (*format)
    {
        if (*format != '%')
        {
            _putchar(*format);
            printed_chars++;
        }
        else
        {
            format++;
            switch (*format)
            {
                case 'c':
                {
                    char c = va_arg(args, int);
                    _putchar(c);
                    printed_chars++;
                    break;
                }
                case 's':
                {
                    char *str = va_arg(args, char *);
                    if (str)
                    {
                        print_str(str);
                        printed_chars += strlen(str);
                    }
                    break;
                }
                case 'd':
                case 'i':
                {
                    int value = va_arg(args, int);
                    print_int(value, 10);
                    break;
                }
                case 'u':
                {
                    unsigned int value = va_arg(args, unsigned int);
                    print_unsigned_int(value);
                    break;
                }
                case 'o':
                {
                    unsigned int value = va_arg(args, unsigned int);
                    char buffer[21];
                    intToString(value, buffer, 8);
                    print_str(buffer);
                    printed_chars += strlen(buffer);
                    break;
                }
                case 'x':
                {
                    unsigned int value = va_arg(args, unsigned int);
                    print_unsigned_hex(value, 1);
                    break;
                }
                case 'X':
                {
                    unsigned int value = va_arg(args, unsigned int);
                    print_unsigned_hex(value, 2);
                    break;
                }
                case 'p':
                {
                    void *ptr = va_arg(args, void *);
                    print_address((unsigned long)ptr);
                    break;
                }
                case '%':
                {
                    _putchar('%');
                    printed_chars++;
                    break;
                }
                default:
                {
                    _putchar('%');
                    _putchar(*format);
                    printed_chars++;
                        break;
                }
            }
        }
        format++;
    }

    va_end(args);
    return printed_chars;
}
