#include <stdio.h>

/**
 * main - prints all the numbers of basic 16 in lowercase,
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

for (n = 48; n < 103; n++)
{
if (n < 58 || n > 96)
putchar(n);
}
putchar('\n');
return (0);
}
