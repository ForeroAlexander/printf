#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - printf.
 *@format: the number
 *Return: return 0
 */
int (*get_func(char s))(va_list)
{
	all_t all[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_number},
		{"r", print_rev},
		{"i", print_int},
		{NULL, NULL}
	};
	int i = 0;
	while (all[i].all != NULL)
	{
		if (s == *all[i].all)
			return (all[i].f);
		i++;
	}
	return ('\0');
}
int print_c(const char *format, int i, int position)
{
	char c = format[i];
	write (1, &c, 1);
	position++;
	return (position);
}
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, position = 0;
	va_start(list, format);
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
