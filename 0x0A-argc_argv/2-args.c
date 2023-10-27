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

int main(int argc, char const *argv[])
{
	int i = 0;

	while (i < argc)
	{
	printf("%s\n", argv[i++]);
	}
}
