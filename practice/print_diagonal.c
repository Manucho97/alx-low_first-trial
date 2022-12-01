#include <stdio.h>
/**
 * print_diagonal - prints diagonal line in tye terminal
 *
 * main - calls print_diagonal
 */


void print_diagonal(int n);

int main(void)
{
	int d_line;

	print_diagonal(d_line);
}

void print_diagonal(int n)
{
	 n = 7;

	for (int i = n; i > 0; i--)
	{
		for ( int j = n; j > 0; j--)
		{
			if ( i == j)
			{
				printf("\\");
			}
			else
			{
			printf(" ");
			}
		}
		printf("\n");
	}
	
}
