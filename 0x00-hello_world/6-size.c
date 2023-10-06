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

printf("The size of char is: %lu bytes(n)\n", (unsigned long)sizeof(a));
printf("The size of int is: %lu bytes(n)\n", (unsigned long)sizeof(b));
printf("The size of long int is: %lu bytes(n)\n", (unsigned long)sizeof(c));
printf("The size of long long int: %lu bytes(n)\n", (unsigned long)sizeof(d));
printf("The size of float: %lu bytes(n)\n", (unsigned long)sizeof(e));
return (0);
}
