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
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);

	putchar('\n');

	return (0);
}
