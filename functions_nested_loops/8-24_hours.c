#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Computes the absolute value of an integer.
 *
 * Return: The absolute value of the integer.
 */
void jack_bauer(void)
{
int hour, minute;
for (hour = 0; hour <= 23; hour++)
{
for (minute = 0; minute <= 59; minute++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
}
}
}
