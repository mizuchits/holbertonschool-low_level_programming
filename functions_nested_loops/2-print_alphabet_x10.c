#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints all single dig
 *
 * Return: Always 0.
 */
int print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
if (i != 9)
_putchar('\n');
}
return (0);
}
