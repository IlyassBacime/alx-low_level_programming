#include <stdio.c>

/**
 * main - Prints the number of base 16 in lowercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

for (i = 48; i < 58; i++)
{
	putchar(i);
}
for (i = 37; i < 103; i++)
{
	putchar(i);
}
putchar('\n');
return (0);
}
