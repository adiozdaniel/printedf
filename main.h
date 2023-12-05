#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

char _putchar(char c);
int _printf(const char *str, ...);
void print_str(char *str);
void print_int(int n, int base);
void print_unsigned_hex(unsigned int n, int _case);
void intToString(unsigned int n, char *str, int base);
void print_unsigned_int(unsigned int n);
void reverseString(char *str);
void print_address(unsigned long n);

#endif/*A compined effort from Felix & Adioz*/
