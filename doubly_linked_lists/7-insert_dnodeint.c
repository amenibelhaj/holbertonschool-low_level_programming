#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A pointer to the head of the doubly linked list.
 * @idx: The index to insert the new node at.
 * @n: The data to be inserted into the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current = *h;
unsigned int i = 0;
if (idx == 0)
return (add_dnodeint(h, n));
while (current != NULL && i < idx)
{
current = current->next;
i++;
}
if (current == NULL && i == idx)
return (add_dnodeint_end(h, n));
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
if (current != NULL)
{
new_node->next = current;
new_node->prev = current->prev;
if (current->prev != NULL)
current->prev->next = new_node;
current->prev = new_node;
}
return (new_node);
}
