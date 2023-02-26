#include "main.h"

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	int r;
	last_digit(98);
	last_digit(0);
	r = last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
