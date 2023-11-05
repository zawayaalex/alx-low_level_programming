#include "main.h"

void _puts(char *str)
{
int n = 0;

if (*s == '\0')
{
n = 0;
}
else
{
do {
n++;
} while (*(s + n) != '\0');
}

for (int i = 0; i < n; i++)
putchar(*s + n);
putchar('\n');
}
