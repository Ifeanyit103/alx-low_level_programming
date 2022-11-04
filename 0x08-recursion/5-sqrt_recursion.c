#include "main.h"
int _sqrt(int n, int i);

/**
 * _sqrt - square root of numbers
 * @n:int
 * @i:int
 * Return: int
 */
int _sqrt(int n, int i)
{
	if (n * n == i)
		return (n);
	if (n * n > i)
		return (-1);
	return (_sqrt(n + 1, i));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt(1, n));
}
