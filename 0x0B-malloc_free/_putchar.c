#include<unistd.h>
#include"main.h"

/**
 * _putchar - write character
 * @c: the character to print
 * Return: none
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
