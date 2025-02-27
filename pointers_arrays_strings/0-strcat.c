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


char *_strcat(char *dest, char *src)
{
 int i,j;

  j=_strlen(src);

  for(i=0; dest[i] != '\0'; i++)  
    {
         src[i+j]=dest[i];
    }
    src[i+j]='\0';
    return (dest);
}
