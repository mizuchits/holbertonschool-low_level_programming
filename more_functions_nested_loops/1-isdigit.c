#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
