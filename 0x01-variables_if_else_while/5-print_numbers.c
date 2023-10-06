#include <stdio.h>

/**
 * main - Prints every digit of base 10 starting from 0
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char digit[10] = "0123456789";
	int i;

for (i = 0; i < 10; i++)
{
	putchar(digit[i]);
}
putchar('\n');
return (0);
}
