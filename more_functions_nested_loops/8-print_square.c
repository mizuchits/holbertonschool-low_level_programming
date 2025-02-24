#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Prints all single dig
 *
 * Return: Always 0.
 */
void print_square(int size)
{
int c;
int c2;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (c = 1; c <= size; c++)
{
for (c2 = 1; c2 <= size; c2++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
