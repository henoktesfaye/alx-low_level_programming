#include "main.h"

/**
 * _isupper - checks if its upper case
 * @c: input character
 * Return: 1 if upper case 0 lower case
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
