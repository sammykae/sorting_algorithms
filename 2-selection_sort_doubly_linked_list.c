#include "sort.h"
/**
 * selection_sort_list - insertion sort algorithm for doubly linked list
 * @list: pointer to array to sort
*/
void selection_sort_list(listint_t **list)
{

listint_t *node, *head, *temp;
int i, j, changed;

node = *list;
for (i = 0; node != NULL; i++)
{
	head = *list;
	changed = 0;
	for (j = 0; j < i; j++)
	{
		temp = node->next;

		if (head->n > node->n)
		{
			node->prev->next = node->next;
			if (temp != NULL)
				node->next->prev = node->prev;

			if (j == 0)
				*list = node;
			else
				head->prev->next = node;

			node->prev = head->prev;
			head->prev = node;
			node->next = head;
			node = temp;
			print_list(*list);
			changed = 1;
			break;
		}
		head = head->next;
	}
	if (changed == 0)
		node = node->next;
}
}
