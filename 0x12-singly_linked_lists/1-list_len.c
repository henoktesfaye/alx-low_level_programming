#include<stdlib.h>
#include"lists.h"

/**
 * list_len - returns num
 * @h: pointer
 * Return: no of elements
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
