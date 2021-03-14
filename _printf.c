#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * print_c - Function that prints the text in the format part.
 * @format: Pointer to a string that gives the format to be printed.
 * @i: Actual position in format.
 * @position: Iterates on format.
 *Return: Always 0.
 */
int print_c(const char *format, int i, int position)
{
	char c = format[i];

	write(1, &c, 1);
	position++;
	return (position);
}
/**
 * _printf - Function that prints diferent formats.
 * @format: Pointer to a string that gives the format to be printed.
 *Return: Always 0.
 */
int _printf(const char *format, ...)
{
	va_list arguments_list;
	int i = 0, position = 0;

	va_start(arguments_list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			if (format[i + 1] != '%')
			{
				if (!get_func(format[i + 1]))
					position += print_c(format, i, position);
				else
				{
					position += get_func(format[i + 1])(list);
					i++;
				}
			}
			else
			{
				position += print_c(format, i, position);
				i++;
			}
		}
		else
			position += print_c(format, i, position);
		i++;
	}
	va_end(list);
	return (position);
	return ('\n');
}
