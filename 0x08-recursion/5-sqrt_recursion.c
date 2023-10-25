#include "main.h"

/**
 * _sqrt_recursion - check the code
 * @n: pointer
 * @val:pointer
 * Return: Always 0.
*/

int sqoure(int n, int val);
int _sqrt_recursion(int n)
{
	return (sqoure(n, 1));
}

/**
 * sqoure -Entry point
 * @val: pointer
 * @n: pointer
 * Return: always 0
*/

int sqoure(int n, int val)
{
	if (val * val == n)
	{
	return (val);
	}
	else if (val * val < n)
	{
	return (sqoure(n, val + 1));
	}
}
