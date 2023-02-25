#include "main.h"
/**
 * isalpha - checks for any letter
 * Return: Always (1) for true, (0) for false
*/
int isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
