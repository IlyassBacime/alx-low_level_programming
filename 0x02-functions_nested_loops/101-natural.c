#include <stdio.h>

/**
 * main - Computes and prints the sum of all multiples of 3 or 5 to 1024
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	int n = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
		n += i;
		}
		i++;
	}
	printf("%d\n", n);
	return (0);
}

