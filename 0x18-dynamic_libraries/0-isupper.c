#include "main.h"

/**
 * _isupper - Checks if the letter is an uppercase
 * @c: The character
 * Return: 0 (Success)
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
