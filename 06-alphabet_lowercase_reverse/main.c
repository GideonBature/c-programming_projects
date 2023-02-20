#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
*/

int main(void)
{

/**
 * main - Entry point
 * Algorithm
 * declare and collect range of variable as input
 * using a while/for loop;
 * check if the lower range is smaller or equal to the upper range
 * print starting from the upper range
 * reduce the alphabet by a single number (--).
 * add a new line using the putchar
 * return 0
*/
	char min;

	char max;

	printf("Enter (Lower, Upper) range\n");
	scanf("%c, %c", &min, &max);

	while (max >= min)
	{
		putchar(max);
		max--;
	}
	putchar('\n');
	return (0);
}
