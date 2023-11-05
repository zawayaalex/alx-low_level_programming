#include "main.h"
/**
* _puts - prints string
* @str: string
*/

void _puts(char *str)
{
int n = 0;

if (*str == "")
{
_putchar(*str);
_putchar('\n');
}
else
{
do {
_putchar(*(str + n));
n++;
} while (*(str + n) != '\0');
}

_putchar('\n');
}
