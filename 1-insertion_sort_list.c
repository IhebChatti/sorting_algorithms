#include "sort.h"

/**
 * insertion_sort_list - function that performs insertion sorting
 * @list: list to be sorted
 *
 * Return: Void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = NULL, *current = *list;

	if (!list || !*list || !(*list)->next)
		return;

	while (current)
	{
		temp = current->next;
		while (current->prev && current->n < current->prev->n)
		{
			if (temp)
				current->next->prev = current->prev;
			current->prev->next = current->next;
			current->next = current->prev;
			current->prev = current->next->prev;
			current->next->prev = current;
			if (current->prev)
				current->prev->next = current;
			else
				*list = current;
			print_list(*list);
		}
		current = temp;
	}
}
