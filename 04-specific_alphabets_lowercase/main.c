#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
*/

int main(void)
{
	char min;
	char max;

	printf("Enter Minimum, Maximum\n");
	scanf("%c, %c", &min, &max);

	while (min <= max)
	{
		if (min == 'a' || min == 'e' || min == 'i' || min == 'o' || min == 'u')
		{
			min++;
		}
		else
		{
			printf("%c", tolower(min));
			min++;
		}
	}
	putchar('\n');
	return (0);
}
