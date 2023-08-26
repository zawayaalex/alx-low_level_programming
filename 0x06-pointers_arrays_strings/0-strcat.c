#include "main.h"

/**
* _strcat - function that concatenates two strings.
*
*
* @dest: input pointer
* @src: source input
*
* Return: pointer to result @dest
*/

char *_strcat(char *dest, char *src)

int c, c2;

c = 0;
/*find array size*/
while (dest[c])
c++;
/*itirate*/
for (c2 = 0; src[c2] ; c2++)
/*append*/
dest[c++] = src[c2];
return (dest);
}
