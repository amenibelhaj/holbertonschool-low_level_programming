#include "lists.h"
/**
 * print_list - Prints all elements of a list_t list
 * @h: The head of the linked list
 *
 * Return: The number of nodes
 */

int _putchar(char c)

{
return (write(1, &c, 1));
}
void print_number(unsigned int n)

{
if (n >= 10)
print_number(n / 10);

_putchar(n % 10 + '0');
}
void print_string(const char *str)

{
while (*str)
{
_putchar(*str);
str++;
}
}
size_t print_list(const list_t *h)

{
size_t len = (0);
while (h != NULL)
{
if (h->str == NULL)
{
_putchar('[');
_putchar('0');
_putchar(']');
_putchar(' ');
_putchar('(');
_putchar('n');
_putchar('i');
_putchar('l');
_putchar(')');
_putchar('\n');
}
else
{
_putchar('[');
print_number(h->len);
_putchar(']');
_putchar(' ');
print_string(h->str);
_putchar('\n');
}
h = h->next;
len++;
}
return (len);
}

