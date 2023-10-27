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
	char *c;
	int sum = 0;

	while (--argc)
	{
	for (c = argv[argc]; *c; c++)
	{
	if (*c < '0' || *c > '9')
	{
	return (printf("Error\n"), 1);
	}
	}
	sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
