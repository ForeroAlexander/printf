#ifndef HOLBERTON_H_
#define HOLBERTON_H_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct all
{
	char *all;
	int (*f)();
}all_t;
int _printf(const char *format, ...);
int print_char(va_list arguments_list);
int print_string(va_list arguments_list);
int _putchar(char c);
int print_number(va_list arguments_list);
int print_rev(va_list arguments_list);
int print_int(va_list arguments_list);
int print_i(int n);

#endif
