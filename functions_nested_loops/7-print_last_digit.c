#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Computes the absolute value of an integer.
 * @n: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */
int print_last_digit(int n)
{
int last_digit = n % 10;
if (last_digit < 0)
last_digit *= -1;
_putchar(last_digit + '0');
return (last_digit);
}
