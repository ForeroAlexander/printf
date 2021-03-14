#include "holberton.h"
/**
 * print_i - Auxiliar function to print numbers-Integers.
 * @n: Number to be printed.
 * Return: Always 0.
 */
int print_i(int n)
{
	if (n / 10 != 0)
	{
		print_i(n / 10);
	}
	_putchar((n % 10) + '0');
	return (0);
}