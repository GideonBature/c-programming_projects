#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 * Algorithm
 * - declare range of variables
 * - take the input of the upper and lower range
 * - check to make sure the range is within base 16
 * - if it is, then go ahead to print it out using the hex identifier %x
 * - else, return invalid input and exit.
 * - add a new line
 * - return
*/

int main(void)
{
	int min;
	int max;

	printf("Please enter (Lower, Upper)\n");

	scanf("%d, %d", &min, &max);

	while (min <= max)
	{
		if (min >= 0 && max <= 15)
		{
			printf("%X", min);
			min++;
		}
		else
		{
			printf("Invalid Input");
			putchar('\n');
			return (1);
		}
	}
	putchar('\n');
	return (0);

}
