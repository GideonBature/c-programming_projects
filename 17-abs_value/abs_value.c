#include "main.h"
/**
 * abs_value - computes absolute value of an integer
 * Return: Always 0 (success)
*/

int abs_value(int n)
{
	if ((n > 0) || (n == 0))
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
