#include <stdio.h>
/**
 * print_triangle - prints triangle
 * main - calls print_triangle
 */

void print_triangle(int size);

int main(void)
{
	int triangle;

	print_triangle(triangle);
}

void print_triangle(int size)
{
	size = 5;

	for (int i = 1; i <= size; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}
