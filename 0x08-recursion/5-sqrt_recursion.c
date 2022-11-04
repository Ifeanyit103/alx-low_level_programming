#include "main.h"
int _sqrt(int, int);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: square root of number
 * Return: -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recusive square root
 * @n: sqrt number
 * @i: iterator
 * Return: a number
 */

int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (1);
	return (_sqrt(n, i + 1));
}
