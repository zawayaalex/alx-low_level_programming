#include "main.h"

/**
* rev_string - fun that prints string reversed
* @s: the string
* _putchar: prints char
*/

void rev_string(char *s)
{
int n = 0;

if (*s == '\0')
{
_putchar('\n');
}
else
{
do {
n++;
} while (*(s + n) != '\0');

do {
n--;
_putchar(*(s + n));

} while (n > 0);
_putchar('\n');
}
}
