#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the code.
 *
 *@s: charctere
 * Return: Always 0.
 */
int _strlen(char *s)
{
int count = 0;
while (*(s + count) != '\0')
count++;
return (count);
}
