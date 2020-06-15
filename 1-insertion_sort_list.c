#include "sort.h"

/**
 * insertion_sort_list - function that performs insertion sorting
 * @list: list to be sorted
 *
 * Return: Void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *current = *list;

	if (!list || !*list || !(*list)->next)
		return;

	current = current->next;
	while (current)
	{
		while (current->prev && current->n < current->prev->n)
		{
			temp = current;
			if (temp->next)
				current->next->prev = temp->prev;
			current->prev->next = temp->next;
			current = temp->prev;
			temp->next = current;
			temp->prev = current->prev;
			if (current->prev)
				current->prev->next = temp;
			current->prev = temp;
			if (!temp->prev)
				*list = temp;
			current = current->prev;
			print_list(*list);
		}
		current = current->next;
	}
}
