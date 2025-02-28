#include "main.h"
#include <stdio.h>

/**
 * reverse_array - check the code.
 * @n: ez
 *@a: charctere
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
long frontIndex = 0;
long backIndex;

backIndex = n;
while (frontIndex < backIndex)
{
char temp = a[frontIndex];
a[frontIndex] = a[backIndex];
a[backIndex] = temp;
frontIndex++;
backIndex--;
}
}
