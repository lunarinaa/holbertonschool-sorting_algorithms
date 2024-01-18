#include "sort.h"

listint_t *swap_nodes(listint_t **next, listint_t *list);

/**
 * insertion_sort_list - sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm
 *
 * @list: pointer to the pointer to the list (head node)
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *next;

	listint_t *curr;

	if (!*list && !list)
		return;

	curr = (*list)->next;

	while (curr)
	{
		next = curr->next;
		while (curr->prev && curr->n < curr->prev->n)
		{
			*list = swap_nodes(&curr, *list);
			print_list(*list);
		}
		curr = next;
	}
}

/**
 * swap_nodes - swaps next and prev nodes
 * @next: pointer to the pointer to the next node
 * @list: pointer to the pointer to the list (head node)
 *
 * Return: pointer to the head node of the list
 */

listint_t *swap_nodes(listint_t **next, listint_t *list)
{
	listint_t *prev = (*next)->prev;
	listint_t *p_prev = prev->prev;
	listint_t *n_next = (*next)->next;

	if (p_prev)
		p_prev->next = *next;

	if (n_next)
		n_next->prev = prev;

	(*next)->prev = p_prev;
	prev->next = n_next;
	prev->prev = *next;
	(*next)->next = prev;

	if (!(*next)->prev)
		return (*next);

	return (list);
}
