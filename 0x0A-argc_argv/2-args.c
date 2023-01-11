#include<stdio.h>
#include"main.h"

/**
 * main - prints all argu
 * @argc: number of argu
 * @argv: array of argument
 * Return: null
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
