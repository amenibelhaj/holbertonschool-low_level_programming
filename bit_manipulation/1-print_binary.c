#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The unsigned long int number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
int i;
int started = 0;
for (i = 63; i >= 0; i--)
{
if ((n >> i) & 1)
{
_putchar('1');
started = 1;
}
else if (started)
{
_putchar('0');
}
}

if (!started)
{
_putchar('0');
}
}
