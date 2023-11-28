#ifndef lists_h
#define lists_h

#include <stdlib.h>

/**
 * struct listint_s - A singly linked list
 * @n: integer
 * @next: this points to the upcoming node
 * Description: A singly linked list node structure
 * for the project pyhton if/else loops and functions
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
listint_t *insert_node(listint_t **head, int number);

#endif /* lists_h */
