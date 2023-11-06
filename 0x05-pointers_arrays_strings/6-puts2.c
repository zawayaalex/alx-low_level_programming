#include "main.h"
/**
* puts2 - prints string
* @str: string
*/

void puts2(char *str)
{
int n = 0, i = 0;

if (*str != '\0')
{
do {
n++;
} while (*(str + n) != '\0');

do {
_putchar(*(str + i));
i = i + 2;
} while (i < n);
}
_putchar('\n');

}
