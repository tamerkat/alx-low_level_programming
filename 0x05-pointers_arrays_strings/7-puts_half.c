#include "main.h"

/**
 * puts_half -Entry point
 * @str:pointer
 * Return: alawys succus
*/

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	;

	i++;
	for (i / 2; str[i] != '\0'; i++)
	printf("%c", str[i]);

	printf("\n");

}
