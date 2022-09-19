#include <stdio.h>
/**
 * main - prints lowercase alphabets
 *
 * must be in reverse order
 *
 * Return: 0
 */

int main(void)
{
	int digit;

	for (digit = 9; digit >= 0; digit--)
		putchar((digit % 10) + '0');
	putchar('\n');

	return (0);
}
