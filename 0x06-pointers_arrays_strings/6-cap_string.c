#include "main.h"

/**
 * cap_string - function that capitalizes all words
 * @n: pointer
 * Return: pointer to string
 */
char *cap_string(char *n)
{
	int k = 0;

	while (n[k])
	{
		while (!(n[k] >= 'a' && n[k] <= 'z'))

			k++;
		if (n[k - 1] == ' ' ||
		    n[k - 1] == '\t' ||
		    n[k - 1] == '\n' ||
		    n[k - 1] == ',' ||
		    n[k - 1] == ';' ||
		    n[k - 1] == '.' ||
		    n[k - 1] == '!' ||
		    n[k - 1] == '?' ||
		    n[k - 1] == '"' ||
		    n[k - 1] == '(' ||
		    n[k - 1] == ')' ||
		    n[k - 1] == '{' ||
		    n[k - 1] == '}' ||
		    k == 0)
			n[k] -= 32;

		k++;
	}
	return (n);
}
