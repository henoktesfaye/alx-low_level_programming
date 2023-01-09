#include"main.h"
/**
 * _memcpy - copies mmeory
 * @dest: destination
 * @src: source memory area
 * @n: bytes filled.
 * Return: the poiinter
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
