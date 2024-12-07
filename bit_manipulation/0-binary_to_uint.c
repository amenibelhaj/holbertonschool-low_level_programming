#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string containing the binary number.
 * Return: The unsigned int representation of the binary number, or
 * 0 if there is one or more chars in the string that is not 0 or 1,
 * or if the string is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int i;

if (b == NULL)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
result = result * 2 + (b[i] - '0');
}

return (result);
}
