#include "sort.h"
/**
 * insertion_sort_singly_list - insertion sort algorithm for singly linked list
 * @list: pointer to array to sort
*/
void insertion_sort_singly_list(listint_t **list)
{

listint_t *node, *head, *prev_head, *prev_node;
int i, j;
if (list == NULL)
	return;

node = *list;

for (i = 0; node != NULL; i++)
{
	head = *list;

	for (j = 0; j < i; j++)
	{
		if (head->n > node->n)
		{
			prev_node->next = node->next;
			node->next = head;
			if (j == 0) /*Insert on the head*/
				*list = node;
			else
				prev_head->next = node;

			node = prev_node;
			print_list(*list);
		}

		prev_head = head;
		head = head->next;
	}
	prev_node = node;
	node = node->next;
}

}
