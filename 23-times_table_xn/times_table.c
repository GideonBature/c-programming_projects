#include "main.h"
#include <stdio.h>
/**
 * times_table - prints n times table
 * Return: Always 0 (success)
*/
void times_table(int n)
{
	int res;
	int i, j;

	if ((n > 15) || (n < 0))
		return;
	
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;
			
			if (j == 0)
				_putchar('0');
			
			else if (res < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
			else if (res < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(res / 100 + '0');
				_putchar((res / 10) % 10 + '0');
				_putchar(res % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
