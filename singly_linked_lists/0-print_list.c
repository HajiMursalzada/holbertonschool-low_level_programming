#include "lists.h"

/**
 * print_list - prints all the elements of linked list.
 * @h: head of linked list.
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t nc = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d], %s\n", h->len, h->str);
		}
		nc++;
		h = h->next;
	}
	return (nc);
}
