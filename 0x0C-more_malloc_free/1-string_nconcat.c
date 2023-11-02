#include "main.h"

/**
 * string_nconcat - Entriy poient
 * @s1: pointer
 * @s2: pointer
 * @n: pointer
 * Return: always success
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, s1_leangh, s2_leangh;
	char *str;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}

	for (s1_leangh = 0; s1[s1_leangh] != '\0'; s1_leangh++)
		;
	for (s2_leangh = 0; s2[s2_leangh] != '\0'; s2_leangh++)
		;

	str = malloc(s1_leangh + n + 1);
	if (str == NULL)
	{
	return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
	str[i] = s2[j];
	i++;
	}
	str[i] = '\0';
	return (str);
}

