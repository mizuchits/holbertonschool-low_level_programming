#include "main.h"

/**
 * _atoi - Copies
 * @s: aaaahhh
 *
 * Return: A
 */
int _atoi(char *s)
{
  int res = 0;
  int i = 0;
  int count = 0;

  while (*(s + count) != '\0')
    {
      count++;
    }
  while (i < count)
    {
      if (s[i] >= '0' && s[i] <= '9')
	{
      	  res = res*10 + s[i] - '0';
	  if (s[i] <= '0' && s[i] >= '9')
            {
              continue;
            }
	}
      i++;
    }
  return res;
}
