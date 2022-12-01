#include <stdio.h>
/**
 * more_numbers - prints 0 - 14 10 times.
 * main - calls more_numbers
 */

void more_numbers(void);

int main(void)
{
	more_numbers();
}

void more_numbers(void)
{
	int i;
	int j;
	
	for (i = 0; i <= 10; i++)
	{
		for(j = 0; j <= 14; j++)
		{
			printf("%d \n", j);
		}
	
	}
	printf("\n");
}
