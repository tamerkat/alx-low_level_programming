#include <stdio.h>
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
	printf("%d\n", 0);
	return (1);
	}

	while (--argc)
	{
	for (c = argv[argc]; *c; c++)
	{
	if (*c < '0' || *c > '9')
	{
	printf("Error");
	return (1);
	}
	sum = atoi(argv[argc]);
	}
	}

	printf("%d\n", sum);
	return (0);

}
