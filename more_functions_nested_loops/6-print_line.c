#include <stdio.h>
#include "main.h"
/**
 * print_line - Prints all single dig
 *
 * Return: Always 0.
 */
void print_line(int n)
{
int count;

for(count = 0; count <= n; count++)
{
_putchar('_');
}
_putchar('\n');
}
