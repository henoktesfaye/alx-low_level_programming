#include<stdio.h>
#include"main.h"

/**
 * main - print name
 * @argc: counts number
 * @argv: count arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
