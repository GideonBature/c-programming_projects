#include "main.h"
/**
 * print_line - fn draws straight line in the terminal
 * Return: 0
*/
void print_line(int n)
{
	int i;
	char sym = '_';

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(sym);
		}
		_putchar('\n');
	}
}


