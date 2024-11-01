#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: the destination string.
 * @src: the source string.
 * @n: the maximum number of bytes to copy from src.
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
char *ptr = dest;
while (n > 0 && *src)
{
*ptr = *src;
ptr++;
src++;
n--;
}
while (n > 0)
{
*ptr = '\0';
ptr++;
n--;
}

return (dest);
}
