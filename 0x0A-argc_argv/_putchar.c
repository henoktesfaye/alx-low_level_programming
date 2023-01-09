#include"main.h"
#include<unistd.h>

/**
 * _putchar - prints
 * @c: character
 * Return: on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
