#include "main.h"
#include <stdio.h>



/**
 * cap_string - check the code.
 *
 *@str: ez
 * Return: Always 0.
 */
char *cap_string(char *entry)
{
	int conversion, count;
	int index;

	char chars[] = {' ', ',', ';', '.', '!',
			 '?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};
	conversion = 32;

	for (index = 0; entry[index] != '\0'; index++)
	{
		if (entry[index] >= 'index' && entry[index] <= 'z')
		{
			entry[index] =  entry[index] - conversion;
		}
		conversion = 0;
		for (count = 0; chars[count] != '\0'; count++)
		{
			if (chars[count] == entry[index])
			{
				conversion = 32;
				break;
			}
		}
	}
	return (entry);
}
