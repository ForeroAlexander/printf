#include "holberton.h"
#include <string.h>
#include <unistd.h>
/**
 * print_char - Function that prints characters.
 * @arguments_list: Variable argument list.
 * Return: Always 0.
 */
int print_char(va_list arguments_list)
{
	int str = va_arg(arguments_list, int);

	_putchar(str);
	return (1);
}
/**
 * print_string - Function that prints strings.
 * @arguments_list: Variable argument list.
 * Return: Always 0.
 */
int print_string(va_list arguments_list)
{
	int i;
	char *str = va_arg(arguments_list, char *);
	char *strNULL = "(null)";

	if (str == NULL)
		for (i = 0; strNULL[i] != '\0'; i++)
			_putchar(strNULL[i]);
	else
	{
		for (i = 0; str[i] != 0; i++)
			_putchar(str[i]);
	}
	return (i);
}
/**
 * print_rev - Function that prints a string in reverse.
 * @arguments_list: Variable argument list.
 * Return: Always 0.
 */
int print_rev(va_list arguments_list)
{
	unsigned int i, j;
	char *str = va_arg(arguments_list, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		;
	for (j = 0; i > 0; j++, i--)
	{
		_putchar(str[i - 1]);
	}
	return (i);
}
/**
 * print_porc - function that prints %
 * @arguments_list: arguments.
 * Return: 0.
 */
int print_porc(va_list arguments_list)
{
	(void)arguments_list;
	_putchar('%');
	return (1);

}
int print_bin(va_list arguments_list)
{
  unsigned int n = va_arg(arguments_list, unsigned int);
  int a[10],i; 
  char p;
  for(i=0;n>0;i++)    
    {    
      a[i]= n % 2;    
      n = n / 2;    
    }    
  for(i = i - 1; i >= 0; i--)    
    {    
      p = a[i] + '0';
      _putchar(p);
    }    
  return (0);
}
