#include <main.h>

/** _strlen - function that returns the lenth of a string
 * @s: for the string
 * @n: for the length
 */

int _strlen(char *s)

int n = 0;
do
{
n++;
}
while (*(s + n) != '\0');
