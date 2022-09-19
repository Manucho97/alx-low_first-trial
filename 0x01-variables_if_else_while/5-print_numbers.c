#include <stdio.h>
/**
 * main - prints base 10 numbers from 0
 * numbers must be single digit
 * Return: 0
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		printf("%d", digit);

	printf("\n");

	return (0);
}
