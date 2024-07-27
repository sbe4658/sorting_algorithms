#include "sort.h"
/**
 * insertion_sort_list - algorithm implementation.
 * sorts a listint_t list in ascending order.
 * @list: head o the list.
 *
 * Return: Nothing.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *h, *last, *tmp;


	if (!list || !(*list))
		return;
	h = (*list)->next;
	while (h)
	{
		tmp = h;
		last = h->prev;
		while (last)
		{
			if (last->n > h->n)
			{
				if (!last->prev)
					(*list) = tmp;
				tmp->prev = last->prev;
				last->next = tmp->next;
				if (tmp->next)
					tmp->next->prev = last;
				tmp->next = last;
				if (last->prev)
					last->prev->next = tmp;
				last->prev = tmp;
				print_list(*list);
			}
			last = last->prev;

		}
		h = h->next;
	}
}
