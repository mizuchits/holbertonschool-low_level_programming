#include "main.h"

/**
 * _strncpy - Copies
 * @dest: aaaahhh
 * @src: ez
 * @
 * Return: A
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (src[index] != '\0')
	{
	  if (index < n)
	    dest[index] = src[index];
	  index++;
	}
	dest[index] = '\0';
	return (dest);
}
