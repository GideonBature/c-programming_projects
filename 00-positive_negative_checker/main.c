#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (error)
*/

int main(void)
{
	char n[10]; /* use the char because works with the fgets */

	puts("Enter any number to check: "); /* enter any number */

	fgets(n, sizeof(n), stdin); /* recieves the number input */

	int num = atoi(n); /* to convert char n to an int */

	float fnum; /* declares a floating point */

	fnum = (float)num;
	/* converts num to floating point to use the 'isnan' feature */

	if (isnan(fnum))
	{
		puts("Invalid Input - Please insert a valid number");

	}
	else if (fnum > 0)
	{
		puts("It is a positive number");
	}
	else
	{
		puts("It is a negative number");
	}
	return (0);
}
