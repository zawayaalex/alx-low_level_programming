#include "main.h"
#include <stdio.h>

/** print_array - prints array of n
* @a: the array
* n: the number
*
*/

void print_array(int *a, int n)
{
int i = 0;
n--;

do {
printf(*(a + i));
printf(" ,");
i++;
} while (i < n);
 printf(*(a + n));
printf("\n");
}
