#include <stdio.h>
/**
 * main - prints numbers from 0 - 9
 *
 */

void print_numbers(int a);


int main(void)
{
	int digits;

	print_numbers(digits);
}


void print_numbers(int a)
{

	for (a = 0; a <= 9; a++)
	{
		printf("%d \n", a);
	}
}
