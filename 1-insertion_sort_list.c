#include "sort.h"

/**
 * insertion_sort_list - Function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 *
 * @list: The parameter that represents the pointer to the doubly linked list
 *
 * Return: Returns no value
 *
 *
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next_node, *previous;

	if (!*list || !(*list)->next)
	{
		return;
	}

	current = (*list)->next;
	while (current)
	{
		next_node = current->next;

		while (current->prev != NULL && current->prev->n > current->n)
		{
			previous = current->prev;
			if (current->next != NULL)
				current->next->prev = previous;
			previous->next = current->next;
			current->next = previous;
			current->prev = previous->prev;

			if (previous->prev != NULL)
				previous->prev->next = current;

			previous->prev = current;
			if (current->prev == NULL)
			{
				*list = current;
			}
			print_list(*list);
		}
		current = next_node;
	}
}
