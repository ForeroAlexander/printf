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
	if (cpy == '\0')
		return ('\0');
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
	free(cpy);
	return (len);
}
/**
 * print_hex - Function that prints hexadecimal numbers.
 * @arguments_list: Arguments that the function receives.
 * Return: len.
 */
int print_hex(va_list arguments_list)
{
	unsigned int n = va_arg(arguments_list, unsigned int);
	unsigned int a[1024];
	int i = 0, temp = 0;
	char p;

	if (n < 1)
	{
		write(1, "0", 1);
		return (1);
	}
	for (i = 0; n > 0; i++, temp++)
	{
		a[temp] = n % 16;
		n = n / 16;
		if (a[temp] > 10)
			a[i] = a[temp] + 39;
		else
			a[i] = a[temp];
	}
	for (i = temp - 1; i >= 0; i--)
	{
		p = a[i] + '0';
		_putchar(p);
	}
	return (temp);
}
/**
  * print_heX - Function that printsin hexadecimal form in uppercase.
  * @arguments_list: Arguments that the function receives.
  * Return: temp.
  */
int print_heX(va_list arguments_list)
{
	unsigned int n = va_arg(arguments_list, unsigned int);
	int a[1024], i = 0, temp = 0;
	char p;

	if (n < 1)
	{
		write(1, "0", 1);
		return (1);
	}
	for (i = 0; n > 0; i++)
	{
		a[temp] = n % 16;
		n = n / 16;
		if (a[i] > 10)
			a[i] = a[temp] + 7;
		else
		{
			a[i] = a[temp];
		}
		temp++;
	}
	for (i = temp - 1; i >= 0; i--)
	{
		p = a[i] + '0';
		_putchar(p);
	}
	return (temp);
}
/**
 * print_add - Function that adds a memory direction.
 * @arguments_list: Arguments that the function receives.
 * Return: len.
 */
int print_add(va_list arguments_list)
{
	unsigned long int n = va_arg(arguments_list, unsigned long int);
	int len = 0;

	_putchar('0');
	_putchar('x');
	len += print_HEX(n);
	len = len + 2;
	return (len);
}
/**
 * print_HEX - Function that prints in hexadecimal form in lowercase.
 * @n: unsigned ling int.
 * Return: temp.
 */
int print_HEX(unsigned long int n)
{
	unsigned int a[1024];
	int i = 0, temp = 0;
	char p;

	if (n < 1)
	{
		write(1, "0", 1);
		return (1);
	}
	for (i = 0; n > 0; i++, temp++)
	{
		a[temp] = n % 16;
		n = n / 16;
		if (a[temp] > 10)
			a[i] = a[temp] + 39;
		else
			a[i] = a[temp];
	}
	for (i = temp - 1; i >= 0; i--)
	{
		p = a[i] + '0';
		_putchar(p);
	}
	return (temp);
}
