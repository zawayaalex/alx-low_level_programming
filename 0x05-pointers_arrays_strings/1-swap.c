#include "main.h"

/**
 * swap_int - switchs the vlues of 2 variables
 * @a: the 1st var
 * @b: the 2nd var
 */

void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
