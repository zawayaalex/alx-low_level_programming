#include "main.h"

/**
* rev_string - fun that prints string reversed
* @s: the string
* _putchar: prints char
*/

void rev_string(char *s)
{
int n = 0;
int i = 0;
char c;

if (*s != '\0')
{
do {
n++;
} while (*(s + n) != '\0');

do {
n--;
*(c + i) = *(s + n);
i++;
} while (n > 0);
s = c;
}
}
