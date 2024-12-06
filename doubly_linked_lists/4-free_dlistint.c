#include "lists.h"
/**
 * free_dlistint - Frees a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current_node = head;
dlistint_t *next_node;

while (current_node != NULL)
{
next_node = current_node->next;
free(current_node);
current_node = next_node;
}
}
