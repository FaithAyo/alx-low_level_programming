#include "lists.h"
#include <stdio.h>
/**
 *print_listint - the fxn that prints all the element
 * @h: head that points to the first element
 * Return: the number of the element of listint_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
	       h = h->next;
		count++;
	}
	return (count);
}

