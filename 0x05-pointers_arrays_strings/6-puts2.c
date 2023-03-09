#include <stdio.h>
#include <string.h>
#include "main.h"
void puts2(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i <= len - 1; i+=2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}

