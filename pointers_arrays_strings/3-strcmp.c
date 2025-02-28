#include "main.h"

/**
 * _strcmp - Copies
 * @s1: aaaahhh
 * @s2: ez
 * Return: A
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && !(*s1 - *s2))
{
s1++;
s2++;
}
return *s1 - *s2;
}
