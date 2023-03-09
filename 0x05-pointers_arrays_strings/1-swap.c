#include "main.h"
/**
 * swap - fn swaps the values of two integers
 * Return: 0
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
