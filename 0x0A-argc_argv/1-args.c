#include<stdio.h>
#include"main.h"

/**
 * main - print name of the program
 * @argc: count arg
 * @argv: argument
 * Return: null
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
