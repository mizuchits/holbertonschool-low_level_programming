#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Prints all single dig
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int count = 0;
int num;
while (count++ <= 9)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
{
_putchar((num / 10) + '0');
}
_putchar((num % 10) + '0');
}
_putchar('\n');
}
}
