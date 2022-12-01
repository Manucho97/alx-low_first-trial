#include <stdio.h>
/**
 * print_line - prints a straight line on the terminal
 *
 * main - calls print_line
 */



void print_line(int n);

int main(void)
{
	int line;

	print_line(line);
}


void print_line(int n)
{
	for (n = 0; n <= 6; n++)
	{
		printf("-");
	}

	printf("\n");
}

