#include "main.h"

/**
 * swap_int - swaps the value of the two integers a and b
 * @a: 1st integer
 * @b: 2nd integer
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
