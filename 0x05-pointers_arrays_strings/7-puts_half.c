#include "main.h"

/**
* puts_half - prints string
* @str: string
*/

void puts_half(char *str)
{
int n = 0;
int i = 0;
if (*str != '\0')
{
do {
n++;
} while (*(str + n) != '\0');
if ((n % 2) != 0)
{
i = n - 1;
n = (n - 1) / 2;
do {
n++;
_putchar(*(str + n));
} while (n < i);
_putchar('\n');
}
else
{
n = n / 2;
do {
_putchar(*(str + n));
n++;
} while (*(str + n) != '\0');
_putchar('\n');
}
}
else
{
_putchar(*str);
}
}
