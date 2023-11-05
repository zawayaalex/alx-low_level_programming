#include "main.h"

void _puts(char *str)
{
int n = 0;

if (*str == '\0')
{
n = 0;
}
else
{
do {
n++;
} while (*(str + n) != '\0');
}

for (int i = 0; i < n; i++)
putchar(*str + n);
putchar('\n');
}
