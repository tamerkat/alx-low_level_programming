#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - Entriy poient
 * @argc: int
 * @argv: list show argc
 * Return: always success
 */

int main(int argc, char *argv[])
{
	if (argc >= 2)
	{
	printf("%i\n", argc - 1);
	return (0);
	}
}
