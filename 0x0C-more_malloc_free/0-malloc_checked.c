#include"main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 * Return: pointer or 98
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
