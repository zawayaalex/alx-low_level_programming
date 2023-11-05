#include "main.h"
/**
* _puts - prints string
* @str: string
*/

void _puts(char *str)
{
int n = 0;

if (*str == '\0')
{
_putchar('\0');

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
