#include "main.h"
/**
 * print_alphabet_10x - prints a - z 10 times
 * Return: Always 0 (success)
*/
void print_alphabet_10x(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
