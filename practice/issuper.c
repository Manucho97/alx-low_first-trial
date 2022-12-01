#include <stdio.h>
#include <ctype.h>
/**
 * Main - checks if character is capital
 *
 * Return 0 always
 */

int isupper(int c)
{
	if ( c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
