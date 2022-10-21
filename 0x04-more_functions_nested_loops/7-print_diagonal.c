#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int j, k;


	if (n <= 0)
		_putchar('\n');

	for (j = 0; j < n; j++)
	{

		for (k = 0; k < j; k++)
			_putchar(' ');


		_putchar('\\');
		_putchar('\n');
	}
}
