#include "holberton.h"
#include <stdio.h>
/**
 * get_func - Function to find the function to be used.
 * @s: Char to find an specific letter or symbol.
 * Return: Always 0.
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
		{NULL, NULL}
	};
	for(j = 0; prn[j].all != '\0'; j++)
        {
		if (prn[j].all[0] == s)
			return (prn[j].f);
	}
	return (NULL);
}
