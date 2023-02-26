#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural num from n to 98
 * Return: Always 0 (success)
*/
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		printf("%d", n);
		for (i = n + 3; i <= 98; i++)
		{
			printf(", %d", i);
		}
		printf("\n");
	}
	else
	{
		printf("%d", n);
		for (i = n - 1; i >= 98; i--)
		{
			printf(", %d", i);
		}
	}
	_putchar('\n');
}	

