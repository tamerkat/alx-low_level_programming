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
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
	return (1);
	}
}
