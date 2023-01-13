#include"main.h"
#include<stdlib.h>

/**
 * string_nconcat - concatenate two stin
 * @s1: first string
 * @s2: second strign
 * @n: amount of bytes
 * Return: pointer to allocated mem
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;

	Unsigned int x, y, z, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		;
	if (n > y)
		n = y;
	z = x + n;
	sout = malloc(z + 1);
	if (sout == NULL)
		return (NULL);
	for (i = 0 i < z; i++)
	{
		if (i < x)
			sout[i] = s1[i];
		else
			sout[i] = s2[i - x];
	}
	sout[i] = '\0';
	return (sout);
}
