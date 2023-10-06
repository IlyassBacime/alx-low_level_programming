#include <stdio.h>
/**
 * main - This programi runs the size of data using the printf function
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

printf("Size of a char: %lu bytes(n)\n", (unsigned long)sizeof(a));
printf("Size of a int: %lu bytes(n)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu bytes(n)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu bytes(n)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu bytes(n)\n", (unsigned long)sizeof(e));
return (0);
}
