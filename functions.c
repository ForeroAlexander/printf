#include "holberton.h"
#include <string.h>
#include <unistd.h>

int print_char(va_list list)
{
	char str = va_arg(list, int);
	write(1, &str, 1);
	return (1);
}
int print_string(va_list list)
{
	char *str = va_arg(list, char *);
	int i = 0;
	if (str == NULL)
		str = "(nil)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (0);
}
int print_number(va_list list)
{
	int num = va_arg(list, int);
	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
		print_i(num);
	}
	else
		print_i(num);
	return (0);
}
int print_int(va_list list)
{
	int num = va_arg(list, int);
	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
		print_i(num);
	}
	else
		print_i(num);
	return (0);
}
int print_i(int n)
{
	if (n / 10 != 0)
	{
		print_i(n / 10);
	}
	_putchar((n % 10) + '0');
	return (0);
}
int print_rev(va_list list)
{
	int i, j;
	char *str = va_arg(list, char *);
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
