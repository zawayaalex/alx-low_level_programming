#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{

int i;

if (n <= 97)
{
for (i = n; i <= 97; i++)
{
printf("%d, ", i);
}
printf("98\n");
}
else if (n > 98)
{
for (i = n; i >= 99; i--)
{
printf("%d, ", i);
}
}
printf("98\n");
}
