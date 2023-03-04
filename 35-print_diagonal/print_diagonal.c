#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the terminal
 * Return: 0
*/
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if ( i <= 0)
		{
			_putchar('\n');
		}
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
