#include <stdio.h>
#include "main.h"
/**
 * print_line - Prints all single dig
 *@n: ez
 *
 * Return: Always 0.
 */
void print_line(int n)
{
int count;
if (n >= 1)
{
for (count = 1; count <= n; count++)
{
_putchar('_');
}
}
_putchar('\n');
}
