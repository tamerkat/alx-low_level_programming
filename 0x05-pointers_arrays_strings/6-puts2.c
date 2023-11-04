#include "main.h"
#include <ctype.h>

/**
 * puts2 - Entry point
 * @str:pointer
 * Return: alawys succus
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (i % 2 == 0)
		printf("%c", str[i]);
	}
	printf("\n")
}
