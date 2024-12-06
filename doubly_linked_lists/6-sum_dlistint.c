#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all the data (n) in a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 * Return: The sum of all the data in the list. If the list is empty,returns 0.
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *current_node = head;

while (current_node != NULL)
{
sum += current_node->n;
current_node = current_node->next;
}
return (sum);
}
