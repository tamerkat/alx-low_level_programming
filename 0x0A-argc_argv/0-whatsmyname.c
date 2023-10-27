#include "main.h"

/**
 * main - Entriy poient
 * @argc: int
 * @argv: list show argc
 * Return: always success
 */

int main(int argc, char **argv)
{
	if (argc != 1)
	{
	return (1);
	}
	printf("%s\n", argv[0]);
}
