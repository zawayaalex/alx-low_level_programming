#include "main.h"

/**
 * _strcat - appends 2 strings
 * @dest: the 1st one
 * @src: the 2nd one
 */

char *_strcat(char *dest, char *src)
{
  int i = 0 , j = 0, n = 0;
  while (*(dest+i) != '\0')
    {
      i++;
    }
  while (*(src+j) != '\0')
    {
      j++;
    }
  while (j < i + j)
    {
      dest[j] = src[n];
      n++;
      j++;
    }
}
