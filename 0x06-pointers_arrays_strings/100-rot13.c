#include "main.h"

/**
 * rot13 -  function that encodes a string using rot13.
 * @n: inpute string
 *
 * Return: value of n
 */

char *rot13(char *n)
{
	int k, m;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (k = 0; *(n + k); k++)
	{
		for (m = 0; m < 52; m++)
		{
			if (a[m] == *(n + k))
			{
				*(n + k) = b[m];
				break;
			}
		}
	}
	return (n);
}

