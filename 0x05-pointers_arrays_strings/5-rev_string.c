#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - fn reverses a string
 * Return: 0
*/
void rev_string(char *s)
{
	int len, i;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
