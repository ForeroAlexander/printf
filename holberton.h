#ifndef HOLBERTON_H_
#define HOLBERTON_H_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *struct all - strcuture function
 *@all: pointer to a char
 *@f: poniter to a function
 */
typedef struct all
{
	char *all;
	int (*f)(va_list x);
} all_t;

int aux(int arg);
int (*get_func(char s))(va_list);
int _printf(const char *format, ...);
int print_char(va_list arguments_list);
int print_string(va_list arguments_list);
int _putchar(char c);
int print_digit(va_list arguments_list);
int print_rev(va_list arguments_list);
/*int print_integer(va_list arguments_list);
  int print_i(int n);*/

#endif
