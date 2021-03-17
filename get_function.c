#include "holberton.h"
#include <stdio.h>
/**
 * get_func - Function to find the function to be used.
 * @s: Char to find an specific letter or symbol.
 * Return: NULL.
 */
int (*get_func(char s))(va_list a)
{
	int j;
	all_t prn[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_porc},
		{"d", print_digit},
		{"i", print_digit},
		{"r", print_rev},
		{"b", print_bin},
		{"R", print_rot},
		{"o", print_oct},
		{"x", print_hex},
		{"X", print_heX},
		{"p", print_add},
		{NULL, NULL}
	};

	for (j = 0; prn[j].all != '\0'; j++)
	{
		if (prn[j].all[0] == s)
			return (prn[j].f);
	}
	return (NULL);
}
