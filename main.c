#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;

	len = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len, len);
	_printf("Negative:[%d]\n", -762534);
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string");
	/*printf("String:[%s]\b", "I am a string");*/
	len = _printf("Percent:[%%]\n");

	_printf("%s\n", "F");
	return (0);
}
