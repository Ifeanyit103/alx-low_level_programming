#include <main.>

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	int k = 0;

	if (c >= '0' && c <= '9')
		k = 1;
	return (k);
}
