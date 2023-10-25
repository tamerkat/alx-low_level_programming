#include "main.h"

/**
 * is_prime_number - check the code
 *@n: pointer
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	if (n == 1)
	{
	return (0);
	}
	if (n / n == 1)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
