#include "main.h"

/**
 * _memset - fill a block of memory with a specifiic value
 * @s: startting address
 * @b: the desirred valuee
 * @n: numbeer of bitts
 * Return: none
 */
char *_memset(char *s, char b,  unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
