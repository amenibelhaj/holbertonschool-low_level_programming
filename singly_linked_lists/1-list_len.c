#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 * @h: A pointer to the head of the linked list
 *
 * This function traverses the linked list starting from the head node and counts 
 * the number of nodes in the list. It returns the total number of nodes.
 *
 * Return: The number of nodes in the linked list
 */

size_t list_len(const list_t *h)
{
size_t len= 0;
while (h != NULL)
{
len++;
h = h->next;
}
return (len);
}
