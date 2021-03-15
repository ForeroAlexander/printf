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
 * _rev - Function that prints a string in reverse.
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
/**
 * print_porc - function that prints %
 * @list: arguments.
 * Return: 0.
 */
int print_porc(va_list arguments_list)
{
	(void)arguments_list;
	_putchar('%');
	return (1);
}
