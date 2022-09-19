#include <stdio.h>
/**
 * main - prints base 16 numbers.
 * all in lower case
 *
 * Retur: 0
 */

int main(void)
{
	char alphabet;
	int digit;

	for (digit = 0; digit < 10; digit++)
		putchar((digit % 10) + '0');

	for (alphabet = 'a'; alphabet = 'f'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
