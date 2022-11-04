#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: int
 * @y: int
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	{
		return (1);
	}
}
