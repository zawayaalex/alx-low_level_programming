#include "main.h"

/**
* puts_half - prints string
* @str: string
*/

void puts_half(char *str)
{
int n = 0;
if (*str != '\0')
{
do {
n++;
} while (*(str + n) != '\0');
if ((n % 2) != 0)
{
n = (n - 1) / 2;
}
else
{
n = n / 2;
}
;
do {
n++;
_putchar(*(str + n));

} while (*(str + n) != '\0');

}
else
{
_putchar(*str);
}
}
