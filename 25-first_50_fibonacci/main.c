#include <stdio.h>
/**
 * main - print 50 fibonacci numbers
 * Return: Always 0 (success)
*/
int main(void)
{
	int i, t1, t2, nextNum;
		t1 = 0;
		t2 = 1;

	for (i = 0; i < 50; i++)
	{
		printf("Number = %d\n", nextNum);
		nextNum = t1 + t2;
		t1 = t2;
		t2 = nextNum;
	}
	return (0);
}
