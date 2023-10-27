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

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
