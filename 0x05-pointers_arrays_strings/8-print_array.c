#include "main.h"
#include <stdio.h>

/** print_array - prints array of n
* @a: the array
* n: the number
*
*/

void print_array(int *a, int n)
{
n--;
for (int i = 0; i < n; i++)
{
printf(a[i]);
printf(" ,");
}
printf(a[n]);
printf("\n");
}
