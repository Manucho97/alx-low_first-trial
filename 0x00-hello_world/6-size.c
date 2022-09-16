#include <stdio.h>
/**
 * main - prints the size of variable
 *
 * return: Returns 0
 */

int main(void)
{
	printf("size of char: %zu bytes\n", sizeof(char));
	printf("size of int: %zu bytes\n", sizeof(int));
	printf("size of long int: %zu bytes\n", sizeof(long int));
	printf("size of long long int: %zu bytes\n", sizeof(long long int));
	printf("size of float: %zu bytes\n", sizeof(float));

		return (0);
}
