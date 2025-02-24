#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int num = 0;
for (; num <= 9; num++)
{
if (num == 2 || num == 4)
{
continue;
}
else
{
_putchar(num + '0');
}
}
_putchar('\n');
}
