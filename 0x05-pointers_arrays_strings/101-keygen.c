#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0
 */

int main(void)
{
	char passwd[84];
	int i = 0, sum = 0, diff_h1, diff_h2;

	srand(time(0));
	while (sum < 2772)
	{
		passwd[i] = 33 + rand() % 94;
		sum += passwd[i++];
	}
	passwd[i] = '\0';
	if (sum != 2772)
	{
		diff_h1 = (sum - 2772) / 2;
		diff_h2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			diff_h1++;
		for (i = 0; passwd[i]; i++)
		{
			if (passwd[i] >= (33 + diff_h1))
			{
				passwd[i] -= diff_h1;
				break;
			}
		}
		for (i = 0; passwd[i]; i++)
		{
			if (passwd[i] >= (33 + diff_h2))
			{
				passwd[i] -= diff_h2;
				break;
			}
		}
	}
	printf("%s", passwd);
	return (0);
}
