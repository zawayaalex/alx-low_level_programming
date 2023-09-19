#include "main.h"

/**
 * print_sign - print sign
 * @n: the number to be checked
 * Return: 1 if + and -1 if - and 0 if 0
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
_putchar('-');
return (-1);
}
