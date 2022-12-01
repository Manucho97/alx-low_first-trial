#include <stdio.h>
/**
 * print_square - prints a square
 *
 * main - calls print_square
 */

void print_square( int size);

int main (void)
{
	int square;

	print_square(square);
}


void print_square(int size)
{
	size = 5;

	for ( int i = 0; i < 5; i++)
	{
		for ( int j = 0; j < 5; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}
