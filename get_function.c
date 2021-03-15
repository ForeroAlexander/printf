#include "holberton.h"
#include <stdio.h>
/**
 * get_func - Function to find the function to be used.
 * @s: Char to find an specific letter or symbol.
 * Return: Always 0.
 */
int (*get_func(char s))(va_list)
{
	all_t all[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_digit},
		{"i", print_digit},
		{"r", print_rev},
		{NULL, NULL}
	};
	int i = 0;

	while (all[i].all != '\0')
	{
		if (s == *all[i].all)
			return (all[i].f);
		i++;
	}
	return ('\0');
}
