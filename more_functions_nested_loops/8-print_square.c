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
for (c = 0; c <= size; c++)
{
for (c2 = 0; c2 <= size; c2++)
{
_putchar('#');
}
_putchar('\n');
}
}
