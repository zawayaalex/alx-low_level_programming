#include "main.h"
#include <stdio.h>

/**
* print_array - prints array of n
* @a: the array
* @n: the number
*/

void print_array(int *a, int n)
{
int i = 0;
if (n <= 0)
{
printf("%i\n", *(a + 0));
}
else
{
n--;
do {
printf("%i ,", *(a + i));
i++;
} while (i < n);
printf("%i\n", *(a + n));
}
}
