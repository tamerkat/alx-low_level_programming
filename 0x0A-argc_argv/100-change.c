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
	if (argc == 2)
	{
	int i, leastcents = 0, money = atoi(argv[i]);
	int censts[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
	if (money > censts[i])
	{
	leastcents += money / censts[i];
	money = money % censts[i];
	if (money % censts[i] == 0)
	{
	break;
	}
	}
	}
	printf("%d\n", leastcents);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
