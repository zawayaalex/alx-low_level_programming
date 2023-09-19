#include "main.h"

/**
 * _isalpha - check for alpha
 * @c: letter to check
 * Return: 1 if alpha , 0 if not
 */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
