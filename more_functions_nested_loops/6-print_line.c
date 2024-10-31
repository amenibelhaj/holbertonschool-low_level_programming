#include "main.h"

/**
* draw a straight line - function that draws a straight line in the terminal.
*/

void print_line(int n);
{
    
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
