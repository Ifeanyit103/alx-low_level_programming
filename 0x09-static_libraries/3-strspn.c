#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: initial segment
 * @accept: bytes consisted
 * Return:number of byte k
 */

unsigned int _strspn(char *s, char *accept)
{
	int k = 0, l, m;

	for (l = 0; s[l] != '\0'; l++)
	{
		if (s[l] != 32)
		{
			for (m = 0; accept[m] != '\0'; m++)
			{
				if (s[l] == accept[m])
					k++;
			}
		}
		else
			return (k);
	}
	return (k);
}
