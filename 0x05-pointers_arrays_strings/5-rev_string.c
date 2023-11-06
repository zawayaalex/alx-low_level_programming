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
char c = *s;

if (*s != '\0')
{
do {
n++;
} while (*(s + n) != '\0');

do {
n--;
c = s[n];
s[n] = c;
i++;
} while (n > 0);
}
}
