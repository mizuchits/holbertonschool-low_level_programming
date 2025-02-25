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
  for (i = 0; str[i] != '\0'; i++)
    {
      if (i >= 5)
	{
	  _putchar(str[i]);
	}
      else
	{
	  continue;
	}
    }
  _putchar('\n');
}
