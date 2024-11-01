#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src.
 * @dest: the destination string.
 * @src: the source string.
 * @n: the maximum number of bytes to append from src.
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
while (*ptr)
{
ptr++;
}
while (n > 0 && *src)
{
*ptr = *src;
ptr++;
src++;
n--;
}
*ptr = '\0';

return (dest);
}
