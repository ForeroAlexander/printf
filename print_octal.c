#include "holberton.h"
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
/**
 * print_oct - pintf octal numbers.
 * @arguments_list: arguments.
 * Return: amount n prints
 */
int print_oct(va_list arguments_list)
{
	unsigned int n, i;
	int j;
	int octalNum[1024];

	n = va_arg(arguments_list, int);
	i = 0;
	while (n != 0)
	{
		octalNum[i] = n % 8;
		n = n / 8;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(octalNum[j] + '0');
	return (i - 2);
}
