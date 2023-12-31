#include <stdio.h>

/**
 * main - Prints the nnumber from 1 to 100 for multiples of 3
 * Fizz is printed for multiples of 5
 * Buzz is printed for multiples of 3 and 5
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0)
		printf("Fizz");

		else if ((num % 5) == 0)
		printf("Buzz");

		else if ((num % 3) == 0 && (num % 5) == 0)
		printf("FizzBuzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
