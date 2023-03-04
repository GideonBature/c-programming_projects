#include "main.h"
/**
 * print_nums - prints 0 to 99
 * Returns: 0
*/
void print_numbers(void)
{
	int i;
	i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
