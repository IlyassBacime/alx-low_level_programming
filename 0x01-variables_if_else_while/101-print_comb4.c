#include <stdio.h>

/**
 * main - Print all possible combinations of 3 digits
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;
	int m;
	int p;

for (n = 48; n <= 56; n++)
{
	for (m = 49; m <= 57; m++)
	{
		for (p = 50; p <= 58; p++)
		{
			if (p > m && m > n)
			{
				putchar(n);
				putchar(m);
				putchar(p);
				if (n != 55 || m != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');
return (0);
}

