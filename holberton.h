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

int _putchar(char c);
int aux(int arg);
int (*get_func(char s))(va_list a);
int _printf(const char *format, ...);
int print_char(va_list arguments_list);
int print_string(va_list arguments_list);
int print_porc(va_list arguments_list);
int print_digit(va_list arguments_list);
int print_rev(va_list arguments_list);
int print_bin(va_list arguments_list);
int print_rot(va_list arguments_list);
int print_uns(va_list arguments_list);
int print_oct(va_list arguments_list);
int print_hex(va_list arguments_list);
int print_heX(va_list arguments_list);
int print_add(va_list arguments_list);
int print_HEX(unsigned long int n);
#endif
