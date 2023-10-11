#include <stdio.h>

/**
 * main - Prints the 52 Fibonacci numbers, starting with 1 and 2
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 0;
	long n = 1, m = 2;

	while (i < 50)
	{
	if (i == 0)
	printf("%ld", n);
	else if (i == 1)
	printf(", %ld", m);
	else
	{
	m += n;
	m = n - m;
	printf(", %ld", m);
	}
	++i;
	}
	printf("\n");
	return (0);
}
