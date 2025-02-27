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
 * _strncpy - Concatenates two strings.
 * @dest: A pointer to the destination string.
 * @src: A pointer to the source string to be appended.
 * @n: ez
 * Return: A pointer to the resulting destination string (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
if (i < n)
dest[i] = src[i];
		i++;
}
dest[i] = '\0';
return (dest);
}
