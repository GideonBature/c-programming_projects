#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - fn prints string in reverse
 * Return: 0
*/
void print_rev(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
