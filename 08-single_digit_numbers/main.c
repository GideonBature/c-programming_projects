#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 * algorithm
 * declare variables for range
 * collects the min and max value via input
 * check if they meet the condition of a single-digit numbers
 * if true - then go ahead and print
 * if false - then return invalid input and exit
 * return 0
*/

int main(void)
{
	int min;
	int max;

	printf("Enter (Lower, Upper)\n");
	scanf("%d, %d", &min, &max);

	while (min <= max)
	{
		if (min >= 0 && max <= 9)
		{
			printf("%d", min);
			min++;

		}


		else 
		{
			printf("Invalid Input\n");
			return (1);
		}

			putchar(',');

			putchar(' ');
	}
	return (0);
}
