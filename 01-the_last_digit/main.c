#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
*/

int main(void)
{
/**
 * main - main point
 * The Algorithm
 * 1 - declare an int variable
 * 2 - collect the variable through input
 * 3 - declare the last variable and find the modulus to 10.
 * 4 - collect the result as the last value and print it out
 * 5 - exit the program using return
*/
	int n; /* declares the variable */

	printf("Enter any number\n"); /* enter the number as input */

	scanf("%d", &n); /* Enter the value to be used */

	int last_digit;

	last_digit = n % 10; /* Dividing by 10 since the number is in base 10 so will always return the unit i.e the last digit of any number */

	printf("The Last digit of %d is %d\n", n, last_digit);

	return (0);

}
