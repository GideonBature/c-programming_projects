#include <stdio.h>
/**
 * natural_nums - sum of all multiples of 3 or 5
 * Return: Always 0 (success)
*/
int main(void)
{
	int n, sum;
	sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum += n;
			printf("The value of n = %d\n", n);
			printf("Total = %d\n", sum);
		}
	}
	return (0);
}
