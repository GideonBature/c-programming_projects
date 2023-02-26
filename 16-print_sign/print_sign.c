#include "main.h"
/**
 * print_sign - prints the sign of a number
 * Return: Always 1 for +ve, 0 for 0 and -1 for -ve
*/
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
