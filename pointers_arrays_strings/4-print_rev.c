#include "main.h"
#include <stdio.h>

/**
 * print_rev - check the code.
 *
 *@s: charctere
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i;
int count = 0;
while (*(s + count) != '\0')
{
count++;
}
for (i = count - 1; s[i] != '\0'; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
