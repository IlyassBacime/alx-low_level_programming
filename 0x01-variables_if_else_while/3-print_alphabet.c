#include <stdio.h>

/**
 * main - prints alphaBET
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alphABET[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

for (i = 0; i < 56; i++)
{
	putchar(alphABET[i]);
}
putchar('\n');
return (0);
}
