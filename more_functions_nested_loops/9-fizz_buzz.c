#include <stdio.h>
/**
 * FizzBuzz - Prints all single dig
 *@i: ez
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
if (i < 100)
{
putchar(' ');
}
}
 return (0);
}
