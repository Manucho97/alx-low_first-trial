#include <stdio.h>
/**
 * Fizzbuzz - prints 0 - 100
 * @multiples of 3 prints fizz.
 * @multiples of 5 prints Buzz.
 * @multiples of 3 and 5 prints FizzBuzz
 */

void FizzBuzz(void);


int main(void)
{
	FizzBuzz();
}

void FizzBuzz(void)
{
		for ( int i = 1; i <= 100; i++)
		{
		if ((i % 3) == 0)
		{
			if ((i % 5) == 0)
			{
				printf(" FizzBuzz");
			}
			else
			{
				printf(" Fizz");
			}
		}
		else if ((i % 5) == 0)
		{
			if ((i % 3) == 0)
			{
				printf(" FizzBuzz");
			}
			else
			{
				printf(" Buzz");
			}
		}
		else if ((i % 3) == 0 || (i % 5) == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
		printf("\n");
}
