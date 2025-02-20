#include <stdio.h>
#include "main.h"

/**
 * print_sign - Checks if a character is lowercase.
 * @n: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
else
_putchar('-');
return (-1);
}
