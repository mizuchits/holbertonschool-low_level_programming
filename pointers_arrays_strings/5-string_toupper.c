#include <stdio.h>
#include "main.h"

/**
 * print_array - print
 *
 * @a: array to be printed
 * @n: number of elements to print
 */
char *string_toupper(char *str)
{
  int i;
  for(i = 0; str[i] != '\0'; i++)
    {
      if(str[i] >= 'a' && str[i] <= 'z')
        {
	  str[i] = str[i] - 32;
        }
    }
  return str;
}
