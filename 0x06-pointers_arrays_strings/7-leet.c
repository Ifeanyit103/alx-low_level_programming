#include "main.h"

/**
 * leet -  function that encodes a string into 1337
 * @n: input
 * Return: value of n
 */
char *leet(char *n)
{
	int k;
	int m;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (k = 0; n[k] != '\0'; k++)
	{
		for (m = 0; m < 10; m++)
		{
			if (n[k] == s1[m])
			{
				n[k] = s2[m];
			}
		}
	}
	return (n);
}


