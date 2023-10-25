#include "main.h"

/**
 * main -Entry point
 *
 * @s: pointer to string
 *
 * Return: void
*/
void _puts_recursion(char *s);

int main(void)
{
	_puts_recursion("Puts with recursion");
	return (0);
}

/**
 * _puts_recursion - check the code
 * @s: pointer to string
 * Return: always 0
*/

void _puts_recursion(char *s)
{
	printf("Puts with recursion");
	printf("\n");
}
