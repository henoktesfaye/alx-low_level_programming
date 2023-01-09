#include"main.h"

/**
 * _strcat - Concatentes te string pointed to by @src
 * @src: The source string to be appended
 * @dest: Referce the destination.
 * Return: A pointer to the destination strign.
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
