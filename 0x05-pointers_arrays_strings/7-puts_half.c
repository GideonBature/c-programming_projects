#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - fn prints second half of string
 * Return: 0
*/
void puts_half(char *str)
{
	int len, i, half;

	len = strlen(str);

	half = (len) / 2;

	if (half % 2 == 1)
	{
		for (i = half; i <= len; i++)
		{
			printf("%c", str[i]);
		}
	}
	printf("\n");
}
	


