#include <stdlib.h>
#include <stdio.h>  /* Required for printf and putchar */

/**
* main - prints the alphabet in lowercase, followed by a new line.
*
* Return: Always returns 0 to indicate success.
*/
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);

putchar('\n');

return (0);

}
