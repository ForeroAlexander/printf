#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>
/**
 *_printf - funtion that print.
 * @format: const char type.
 * Return: Number of digits.
 */
int _printf(const char *format, ...)
{
	va_list arguments_list;
	int cont = 0, i = -1;
	int (*z)(va_list);

	va_start(arguments_list, format);
	if (format == NULL)
		return (-1);

	if (format != NULL)
	{
		i = 0;
		for (; format[cont] != '\0'; i++, cont++)
		{
			if (format[cont] != '%')
				_putchar(format[cont]);
			else if (format[cont] == '%' && format[cont + 1] == '\0')
			{
				return (-1);
			}
			else if (format[cont] == '%' && format[cont + 1] != '\0')
			{
				z = get_func(format[cont + 1]);
				if (z == NULL)
					_putchar(format[cont]);
				else
				{
					i = (i + z(arguments_list)) - 1;
					cont++;
				}
			}
		}
	}
	va_end(arguments_list);
	return (i);
}
