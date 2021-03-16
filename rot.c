#include "holberton.h"
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>

/**
 * print_rot - pintf to rot13
 * @argument_list: arguments variadi
 * Return: amount n prints
 */

int print_rot(va_list arguments_list)
{
	char *s;
	char *A = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *R = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j, count = 0;

	s = va_arg(arguments_list, char *);
	i = 0;
	while (s[i])
	{
		count++;
		j = 0;
		while (A[j])
		{
			if (s[i] == A[j])
			{
				_putchar(R[j]);
				break;
			}
			if (A[j + 1] == '\0')
				_putchar(s[i]);
			j++;
		}
		i++;
	}
	return (count - 2);
}

/**
 *
 *
 *
 */
int print_oct(va_list arguments_list)
{
	unsigned int n = va_arg(arguments_list, unsigned int);
	int a[1024], i;
	char p;

	if (n < 1)
    {
      write(1, "0", 1);
    }
	for(i = 0;n > 0; i++)
	{
		a[i]= n % 8;
		n = n / 8;
	}
	for(i = i - 1; i >= 0; i--)
	{
		p = a[i] + '0';
		_putchar(p);
	}
	return (0);
}
/**
 *
 *
 *
 */
int print_hex(va_list arguments_list)
{
	unsigned int n = va_arg(arguments_list, unsigned int);
	int a[1024],i, len;
	char p;
	if (n < 1)
	{
		write(1, "0", 1);
	}
	for(i = 0;n > 0; i++)
	{
		a[len]= n % 16;
		n = n / 16;
		if(a[i] < 9)
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
	for(i = len - 1; i >= 0; i--)
	{
		p = a[i] + '0';
		_putchar(p);
	}
	return (len);
}
