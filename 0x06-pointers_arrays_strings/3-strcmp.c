#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: difference between s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int k;

	k = 0;
	while (s1[k] != '\0' && s2[k] != '\0')
	{
		if (s1[k] == s2[k])
		{
			return (s1[k] = s2[k]);
		}

		k++;
	}

	return (0);
}

