#include "holberton.h"
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
/**
 * print_rot - pintf to rot13
 * @arguments_list: arguments variadi
 * Return: amount n prints
 */
int print_rot(va_list arguments_list)
{
	int i = 0, cop = 0, len = 0;
	char rot[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char num[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *cpy;
	char *string = va_arg(arguments_list, char *);

	for (i = 0; string[i] != '\0'; i++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));
	for (i = 0; i <= len; i++)
	{
		cpy[i] = string[i];
	}
	for (i = 0; cpy[i]; i++)
	{
		for (cop = 0; rot[cop]; cop++)
		{
			if (cpy[i] == rot[cop])
			{
				cpy[i] = num[cop];
				break;
			}
		}
	}
	i = 0;
	while (cpy[i] != '\0')
	{
		_putchar(cpy[i]);
		i++;
	}
	return (len);
}
/**
 * print_oct - Function that prints octal numbers.
 * @arguments_list: argument.
 * Return: amount n prints.
 */
int print_oct(va_list arguments_list)
{
	unsigned int n, i;
	int j;
	int octalNum[1000];

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
/**
 * print_hex - Function that prints hexadecimal numbers.
 * @arguments_list: Arguments.
 * Return: len.
 */
int print_hex(va_list arguments_list)
{
	unsigned int n = va_arg(arguments_list, unsigned int);
	int a[1024], i, len;
	char p;

	if (n < 1)
	{
		write(1, "0", 1);
	}
	for (i = 0; n > 0; i++)
	{
		a[len] = n % 16;
		n = n / 16;
		if (a[i] < 9)
		{
			a[i] = a[len] + 39;
		}
		else
		{
			a[i] = a[len];
		}
		i++;
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		p = a[i] + '0';
		_putchar(p);
	}
	return (len);
}
