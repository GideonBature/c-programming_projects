#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Return: Always 0 (success);
*/

int main(void)
{
	/* define variables */
	char min;
	char max;
	char minRange;
	char maxRange;

	printf("Enter Range (Lower, Higher, Lower, Higher\n");

	/* collect input for all variables */
	scanf("%c, %c, %c, %c", &min, &max, &minRange, &maxRange);

	/* decision to print small and capital alphabet together */
	while (min <= max)
	{
		printf("%c", tolower(min));
		min++;
	}
	while (minRange <= maxRange)
	{
		printf("%c", toupper(minRange));
		minRange++;
	}
	putchar('\n');
	return (0);
}
