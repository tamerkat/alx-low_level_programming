#include "main.h"

/**
 * string_nconcat - Entry poient
 * @s1: pointer
 * @s2: pointer
 * @n: pointer
 * Return: always success
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, s1_leanght, s2_leanght;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_leanght = 0; s1[s1_leanght] != '\0'; s1_leanght++)
	;
	for (s2_leanght = 0; s2[s2_leanght] != '\0'; s2_leanght++)
	;

	str = malloc(s1_leanght + n + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
	str[i] = s2[j];
	i++;
	}
	str[i] = '\0';
	return (str);
}

