#include "main.h"

/**
 * print_times_table - prints the n times table starting with 0,
 * @n: input from 0 to 15
 */
void print_times_table(int n)
{
if ((0 <= n) && (n <= 15))
{
int i, j, k;

        for (i = 0; i <= n; i++)
        {
                for (j = 0; j <= n; j++)
                {
                        k = j * i;
                        if (j == 0)
                        {
                                _putchar(k + '0');
                        }

                        if (k < 10 && j != 0)
                        {
                                _putchar(',');
                                _putchar(' ');
                                _putchar(' ');
                                _putchar(k + '0');
                        } else if (k >= 10)
                        {
                                _putchar(',');
                                _putchar(' ');
                                _putchar((k / 10) + '0');
                                _putchar((k % 10) + '0');
                        }
                }
                _putchar('\n');
        }
}
}
