#include "main.h"
/**
* puts2 - prints string
* @str: string
*/

void puts2(char *str)
{
int n = 0;

if (*str == '\0')
{
_putchar('\n');

}
else
{
do {
_putchar(*(str + n));
n = n + 2;
} while (*(str + n) != '\0');

_putchar('\n');
}
}
