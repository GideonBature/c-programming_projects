#include <stdio.h>
#include "main.h"
/**
 * main - fizz for 3, buzz for 5 and fizzbuzz for 3 and 5
 * Return: 0
*/
int main(void)
{
	int i;

	for (i = ; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	_putchar('\n');
	return (0);
}
