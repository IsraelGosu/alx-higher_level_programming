#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - this Checks if a singly-linked list contains a cycle.
 * @list: A singly linked to list.
 * Return: If there is a cycle 1 or If there is no cycle then 0.
 */
int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (list == NULL || list->next == NULL)
		return (0);

	slow = list->next;
	fast = list->next->next;

	while (slow && fast && fast->next)
	{
		if (slow == fast)
			return (1);

		slow = slow->next;
		fast = fast->next->next;
	}

	return (0);
}
