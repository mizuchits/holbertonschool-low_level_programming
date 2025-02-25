#include "main.h"
#include <stdio.h>

/**
 * rev_string - check the code.
 *
 *@s: charctere
 * Return: Always 0.
 */
void rev_string(char *s)
{
int frontIndex = 0;
int backIndex;
int count = 0;
while (*(s + count) != '\0')
{
count++;
}
backIndex = count - 1;
while(frontIndex < backIndex)
{
char temp = s[frontIndex];
s[frontIndex] = s[backIndex];
s[backIndex] = temp; 
frontIndex++;
backIndex--;
}
}
