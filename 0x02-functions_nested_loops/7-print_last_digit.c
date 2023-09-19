#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: the last digit
 * Return: the last digit
 */

int print_last_digit(int)
{
int n;
if (n % 10 >= 0)
{
return(n % 10);
}
else
rturn(-n % 10);
}