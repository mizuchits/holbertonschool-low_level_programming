#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints all single dig
 *
 * Return: Always 0.
 */
int print_alphabet_x10(void)
{
int count = 0;
char letter;
while (count++ <= 9)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
return (0);
}
