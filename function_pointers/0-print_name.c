#include "function_pointers.h"

/**
 * print_name - prints a name using the function passed as a pointer
 * @name: name of the person
 * @f: pointer to a function that takes a name and prints it
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
