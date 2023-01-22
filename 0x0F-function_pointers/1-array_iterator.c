#include "function_pointers.h"
 #include <stdio.h>

/**
 * array_iterator - prints each array
 * @array: array
 * @size: how many to print
 * @action: pointercto print
 * Return: null
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
