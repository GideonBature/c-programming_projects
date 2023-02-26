#include <stdio.h>
/**
 * main - prints first 98 fibonacci nums
 * Return: Always 0 (success)
*/
int main(void)
{
	int n1, n2, sum, i;

	n1 = 1;
	n2 = 2;

	for (i = 0; i < 98; i++)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		printf("Total = %d\n", sum);
	}
	return (0);
}
