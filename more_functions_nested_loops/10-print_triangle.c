#include <stdio.h>
#include "main.h"
/**
 * print_triangle - Prints all single dig
 *@size: une taille,????????????????????????
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
int c, c2 = 0;
int space;
if (size > 0)
{
while (c2 < size)
{
space = size - c2 - 1;
while (c < size)
{
if (space > c)
{
_putchar(' ');
}
else
{
_putchar('#');
}
c++;
}
c2++;
c = 0;
_putchar ('\n');
}
}
else
_putchar('\n');

}

