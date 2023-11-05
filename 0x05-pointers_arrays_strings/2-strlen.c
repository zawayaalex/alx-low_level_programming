#include "main.h"

/**
 * _strlen - function that returns the lenth of a string
 * @s: for the string
 * @n: for the length
 */

int _strlen(char *s)
{
if (*s == '\0')
return 0;

int n = 0;
do
{
n++;
}
while (*(s + n) != '\0');
return n;
}
