#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns the no of element in a linked list
 * @h: the head that points to the first element
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
