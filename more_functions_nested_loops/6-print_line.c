#include "main.h"
/**
 * print_line - Draws a straight line using underscores.
 * @n: The number of underscores to print.
 *
 * Description: This function prints a horizontal line made of
 * underscores ('_'). The length of the line is determined by
 * the parameter `n`. If `n` is greater than 0, it will print
 * `n` underscores in a row, followed by a newline character.
 * If `n` is 0 or less, it simply prints a newline.
 *
 * Return: void
 */
void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
