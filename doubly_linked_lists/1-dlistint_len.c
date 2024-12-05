#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to the pointer of the first node in the list.
 * @n: The integer to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
size_t dlistint_len(const dlistint_t *h)

{
size_t count = 0;
const dlistint_t *current = h;
while (current != NULL)
{
count++;
current = current->next;
}
return count;
}
