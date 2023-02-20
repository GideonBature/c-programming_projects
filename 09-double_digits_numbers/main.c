#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 * Algorithm
 *
*/

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			if ((i == 0 && j == 0) || (i == j))
			{
				continue;
			}
			printf("%d%d", i, j);
			if (i < 8)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
