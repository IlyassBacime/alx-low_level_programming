#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @c: The number that we'll compute
 * Return: The absolute value of a number or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}

