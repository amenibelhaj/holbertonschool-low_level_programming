#include "main.h"

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @str: The input string to be converted.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
char *original = str;

while (*str)
{
if (*str >= 'a' && *str <= 'z')
{
*str = *str - ('a' - 'A');
}
str++;
}

return (original);
}
