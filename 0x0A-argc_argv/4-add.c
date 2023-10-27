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
	int sum;

	if (argc == 1)
	{
	printf("0\n");
	}
	while (--argc)
	{
	for (c = argv[argc]; *c; c++)
	{
	if (*c < '0' || *c > '9')
	{
	printf("Error\n");
	return (1);
	}
	sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
	}

}

