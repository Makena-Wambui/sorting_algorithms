#include "sort.h"

/**
 * insertion_sort_list - this function sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm.
 *
 * @list: a pointer to a pointer to head of doubly linked list
 *
 * Return: void
 *
 */
void insertion_sort_list(listint_t **list)
{	/* temp points to head of the list.*/
	listint_t *temp, *ptr, *nxt;

	/* check for Null pointers or only one element.*/
	if (list == NULL || (*list) == NULL || (*list)->next == NULL)
	{
		return;
	}
	/* temp points to head of the list.*/
	temp = *list;
	/* ptr points to the second node.*/
	ptr = temp->next;

	/* iterate over the list.*/
	while (ptr != NULL)
	{
		nxt = ptr->next;
		while (ptr->prev != NULL && ptr->n < ptr->prev->n)
		{
			/*swap nodes.*/
			if (ptr->next != NULL)
				ptr->next->prev = ptr->prev;
			ptr->prev->next = ptr->next;
			ptr->next = ptr->prev;
			ptr->prev = ptr->next->prev;
			ptr->next->prev = ptr;

			if (ptr->prev != NULL)
				ptr->prev->next = ptr;
			else
			{
				/**
				 * ptr is now head node.
				 * list now holds the address of ptr.
				 */
				*list = ptr;
			}
			print_list(*list);
		}
		ptr = nxt;
	}
}
