#include "holberton.h"
/**
 * print_digit - funtion that prints a digit.
 * @list: arguments.
 * Return: 0.
 */
int print_digit(va_list list)
{
	int arg = va_arg(list, int);
	int i;

	i = aux(arg);
	return (i);
}

/**
 * aux - auxiliar recursive function
 * @arg: is an integer argument
 * Return: index
 */
int aux(int arg)
{
	int i;
	unsigned int number;

	i = 0;
	number = arg;
	if (arg < 0)
	{
		i += _putchar('-');
		number = -number;
	}
	if (number == 0)
	{
		i += _putchar('0');
		return (i);
	}

	if (number / 10)
		i += aux(number /  10);

	i += _putchar(number % 10 + '0');
	return (i);
}
