#include "main.h"

/**
 * print_sign - Prints the sign ofa number
 * @n: The character that we'll check
 * Return: 1 if n is postivie, -1 for negative or 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
