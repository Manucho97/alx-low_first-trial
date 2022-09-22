#include <stdio.h>
/**
 * main - starts the program
 *
 * Return: 0 
 */

int main(void)
{
	int number = 0;
	int sum = 0;

	while(number > 0)
	{
		printf("Enter a value above 0: ");
		scanf("%d", &number);
		if(number > 0)
		{
			sum = sum + number;
		}
	}

	printf("sum: %d", sum);

	return 0;
}
/**
 * the while loop checks the condition first before excutinfg the code.
 * For the do while loop, it runs the  block of code first before checking for the condition and thus acertain whether to continue or not
 * do{ code
 * } while(number > 0)
