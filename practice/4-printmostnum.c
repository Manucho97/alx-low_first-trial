#include <stdio.h>
/**
 * print_most_numbers - prints 0 - 9 excluding 2 and 4
 *main - calls Print_most_numbers
 */

void print_most_numbers(void);


int main(void)
{

	print_most_numbers();
}

void print_most_numbers(void)
{
	int a;

        for  (a = 0; a <= 9; a++)
	{
		if (a != 2 && a != 4)
		{
			printf("%d", a);
		}
		printf("\n");
	}
}
