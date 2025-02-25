#include "main.h"

/**
 * _strcpy - Copies
 * @dest: aaaahhh
 * @src: ez
 *
 * Return: A
 */
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
