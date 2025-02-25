#include "main.h"
#include <stdio.h>

/**
 * _puts - check the code.
 *
 *@str: charctere
 * Return: Always 0.
 */
void puts2(char *str)
{
  int i;
  for (i = 0; str[i] != '\0'; i++)
    {
      if (i % 2 == 0)
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
