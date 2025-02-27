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

/**
 * _strcat - Concatenates two strings.
 * @dest: A pointer to the destination string.
 * @src: A pointer to the source string to be appended.
 *
 * Return: A pointer to the resulting destination string (dest).
 */
char *_strcat(char *dest, char *src)
{
int i, j;
j = _strlen(dest);
for (i = 0; src[i] != '\0'; i++)
{
dest[i + j] = src[i];
}
dest[i + j] = '\0';
return (dest);
}
