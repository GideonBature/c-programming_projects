#include "main.h"
/**
 * islower - checks for lowercase characters
 * Return: 0 for success and 1 otherwise
*/

int islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
