#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
*/

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				if (i != j && j != k && i != k)
				{
					printf("%d%d%d, ", i, j, k);
				}
			}
		}
	}
	return (0);
}
