#include "main.h"

/**
 * -isalpha - Prints a function that checks for alphabetic character lower or upper
 * @c: c stands for a lowercase letter or uppercase letter
 * Return: 1 if c is a letter, lowercase or uppercase, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
