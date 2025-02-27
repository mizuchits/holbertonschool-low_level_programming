#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the code.
 *_strcat - ez
 *
 *@s: charctere
 *@dest: ez
 *@src: ez
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
j=_strlen(dest);
for(i=0; src[i] != '\0'; i++)  
{
dest[i+j]=src[i];
}
dest[i+j]='\0';
return (dest);
}
