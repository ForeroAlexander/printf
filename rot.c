#include "holberton.h"
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
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
