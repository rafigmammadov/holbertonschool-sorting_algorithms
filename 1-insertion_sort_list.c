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
	listint_t *temp, *curr, *next;

	if ((list == NULL) || (*list == NULL) || (*list)->next == NULL)
	{
		return;
	}

	current = (*list)->next;

	while (current)
	{
		next = temp->next;

		temp = curr;

		while (temp->prev != NULL && temp->prev->n > curr->n)
			temp = temp->prev;

		if (temp != curr)
		{
			curr->prev->next = curr->next;

			if (curr->next != NULL)
				curr->next->prev = curr->prev;

			curr->next = temp;
			curr->prev = temp->prev;

			if (temp->prev != NULL)
				temp->prev->next = curr;
			temp->prev = curr;

			if (curr->prev == NULL)
				*list = curr;
		}

		curr = next;
	}
}
