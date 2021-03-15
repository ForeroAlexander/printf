#include "holberton.h"
#include <string.h>
#include <unistd.h>
/**
 * print_char - Function that prints characters.
 * @arguments_list: Variable argument list.
 * Return: Always 0.
 */
int print_char(va_list arguments_list)
{
	int str = va_arg(arguments_list, int);

	_putchar(str);
	return (1);
}
/**
 * print_string - Function that prints strings.
 * @arguments_list: Variable argument list.
 * Return: Always 0.
 */
int print_string(va_list arguments_list)
{
	char *str = va_arg(arguments_list, char *);
	int i = 0;

	if (str == NULL)
		str = "(nil)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
/**
 * print_number - Function that prints numbers.
 * @arguments_list: Variable argument list.
 * Return: Always 0.
 */
int print_number(va_list arguments_list)
{
	int number = va_arg(arguments_list, int);

	if (number < 0)
	{
		_putchar('-');
		number = number * -1;
		print_i(number);
	}
	else
		print_i(number);
	return (0);
}
/**
 * print_integer - Function that prints integers.
 * @arguments_list: Variable argument list.
 * Return: Always 0.
 */
int print_integer(va_list arguments_list)
{
	int number = va_arg(arguments_list, int);

	if (number < 0)
	{
		_putchar('-');
		number = number * -1;
		print_i(number);
	}
	else
		print_i(number);
	return (0);
}
/**
 * print_rev - Function that prints a string in reverse.
 * @arguments_list: Variable argument list.
 * Return: Always 0.
 */
int print_rev(va_list arguments_list)
{
	int i, j;
	char *str = va_arg(arguments_list, char *);

	if (str == '\0')
		str = "(nil)";
	for (i = 0; str[i] != '\0'; i++)
		;
	for (j = 0; i > 0; j++, i--)
	{
		_putchar(str[i - 1]);
	}
	return (0);
}
