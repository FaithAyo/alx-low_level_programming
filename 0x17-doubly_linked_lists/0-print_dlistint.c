#include "lists.h"
/**
 * print_dlistint - Function entry
 * Description: A function that prints all the elements of a dlistint_t list
 * @h: address to the head node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *head)
{
	size_t i = 0;

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		i++;
	}
	return (i);
}
