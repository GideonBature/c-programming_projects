#include <stdio.h>
/**
 * main - prints the sum of even fibonacci numbers
 * Return: Always 0 (success)
*/
int main(void)
{
	int t1, t2, num,total;
	total = 0;
	t1 = 1;
	t2 = 2;

	while (total <= 4000000)
	{
		num = t1 + t2;
		t1 = t2;
		t2 = num;

		if (num % 2 == 0)
		{
			num += num;
			printf("Total = %d\n", num);
		}
		total += num;
	}
	return (0);
}
