#include "lists.h"

/**
 * print_listint - printing all elements  of a linked list
 * @h: linked list of type listint_t for printing
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (m)
	{
		printf("%d\n", m->n);
		num++;
		m = m->next;
	}

	return (num);
}
i
