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
	int i;
	char *str = va_arg(arguments_list, char *);
	char *strNULL = "(null)";

<<<<<<< HEAD
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (0);
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
=======
	if (str == NULL)
		for (i = 0; strNULL[i] != '\0'; i++)
			_putchar(strNULL[i]);
>>>>>>> a1a23dfe2b66fcfa901930e8cb25a0c5791ed0c7
	else
		for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

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
