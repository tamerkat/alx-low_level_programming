#include "main.h"

/**
 * cap_string - Entry point
 * @str: pointer
 * Return: always succuss
*/

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((int)str[i] == 32)
		{
			int j = i + 1;

			if ((int)str[j] >= 97 && (int)str[j] <= 122)
				str[j] = (int)str[j] - 32;
		}
	}
	return (str);
}
