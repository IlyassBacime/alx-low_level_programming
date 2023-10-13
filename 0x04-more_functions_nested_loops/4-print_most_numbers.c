#include "main.h"

/**
 * print_most_numbers - Function that prints for 0 to 9 avoiding 2 and 4
 *
 * Return: 0 (Success)
 */

void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50)
		{
			if (c != 52)
			{
				_putchar(c);
			}
		}
	}
	_putchar('\n');
}
