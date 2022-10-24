#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: conversion pointer
 * Return: integer
 */
int _atoi(char *s)
{
	int k = 0;
	unsigned int nj = 0;
	int min = 1;
	int sir = 0;

	while (s[k])
	{
		if (s[k] == 45)
		{
			min *= -1;
		}

		while (s[k] >= 48 && s[k] <= 57)
		{
			sir = 1;
			nj = (nj * 10) + (s[k] - '0');
			k++;
		}

		if (sir == 1)
		{
			break;
		}

		k++;
	}
	nj *= min;
	return (nj);
}
