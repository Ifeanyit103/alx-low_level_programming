#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: input
 * Return:  reverses in string
 */

void rev_string(char *s)
{
	char rv = s[0];
	int b = 0;
	int k;

	while (s[b] != '\0')
		b++;
	for (k = 0; k < b; k++)
	{
		b--;
		rv = s[k];
		s[k] = s[b];
		s[b] = rv;
	}
}

