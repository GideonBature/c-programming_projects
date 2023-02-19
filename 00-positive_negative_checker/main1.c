
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (error)
*/

int main(void)
{
	int num; /* declares the variable num as an integer*/

	printf("Enter any number:\n");

	if (scanf("%d", &num) != 1) /* Checks if what is entered is a number or not */
	{
		printf("The input is invalid\n");
		return (1);
	}
	else if (num > 0) /* Checks if the variable is positive */
	{
		printf("The number is a \"Positive\" number\n");
	}
	else /* Checks if the variable is negative */
	{
		printf("The number is a \"Negative\" number\n");
	}
	return (0);
}
