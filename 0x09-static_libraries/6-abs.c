#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @n: The integer to be computed
 * Return: The absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n);
}
