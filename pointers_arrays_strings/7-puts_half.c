#include "main.h"
#include <stdio.h>

/**
 * puts2 - check the code.
 *
 *@str: charctere
 * Return: Always 0.
 */
void puts_half(char *str)
{
  int i;
  int count = 0;
  
  while (*(str + count) != '\0')
    {
      count++;
    }
  
  if (count % 2 == 0)
    {
      for (i = count / 2; str[i] != '\0'; i++)
	_putchar(str[i]);
    }
  else
    {
      for (i = (count + 1) / 2; str[i] != '\0'; i++)
	{
	  _putchar(str[i]);
	}
    }
  _putchar('\n');
}
