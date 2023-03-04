#include <stdio.h>
#include <math.h>
/**
 * isprime - checks for prime numbers
 * main - checks for largest prime factor of 612852475143
 * Return: the largest prime factor
*/
int isprime(long long n)
{
	long long i;
	long long sqrt;

	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	for (i = 3; i <= n; i += 2)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

int main(void)
{
	long long n = 612852475143;
	long long largest_prime_factor = 1;
	long long i;

	/* check if 2 is a factor and divide it out */
	while (n % 2 == 0)
	{
		n /= 2;
		largest_prime_factor = 2;
	}

	/* check odd factors up to the sqrt of n */
	for (i = 3; i <= n; i += 2)
	{
		if (n % i == 0 && isprime(i))
		{
			n /= i;
			largest_prime_factor = i;
		}
	}

	/* if n is still greater than 2, is it also a prime number */
	if (n > 2)
	{
		largest_prime_factor = n;
	}

	printf("%lld\n", largest_prime_factor);
	
	return (0);
}
