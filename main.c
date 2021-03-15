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
<<<<<<< HEAD

	len = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len, len);
	_printf("Negative:[%d]\n", -762534);
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string");
	/*printf("String:[%s]\b", "I am a string");*/
	len = _printf("Percent:[%%]\n");

	_printf("%s\n", "F");
=======
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	_printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	_printf("Unknown:[%r]\n");
>>>>>>> a1a23dfe2b66fcfa901930e8cb25a0c5791ed0c7
	return (0);
}
