#include "main.h"
/**
 * last_digit - fn prints the last digit of a number
 * Return: value of last digit
*/
int last_digit(int n)
{
	int num;

	if (n < 0)
	{
		n = -n;
	}
	num = n % 10;

	_putchar('0' + num);

	return (num);
}
