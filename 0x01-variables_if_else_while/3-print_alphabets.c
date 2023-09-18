#include <stdio.h>

/**                                                                                                                                                                                                           
 * main - prints the alphabet in lowercase,                                                                                                                                                                   
 * followed by a new line                                                                                                                                                                                     
 * Return: Always 0 (Success)                                                                                                                                                                                 
 */

int main(void)
{
char c;
char d;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (d = 'A'; d <= 'Z'; d++)
{putchar(d);)
putchar('\n');
return (0);
}
