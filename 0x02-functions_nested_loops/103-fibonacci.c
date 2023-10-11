#include <stdio.h>

/**
 * main - Prints the sum of even fibanocci numbers
 * less then 4000000
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 0;
	long n = 1, m = 2, sum = m;

	while (m + n < 4000000)
	{
	m += n;
	if (m % 2 == 0)
	sum += m;
	n = m - n;
	++i;
	}
	printf("%ld\n", sum);
	return (0);
}
