#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate to s1.
 *
 * Return: Pointer to the newly allocated memory containing s1 followed by
 *         the first n bytes of s2, null-terminated. Returns NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int i = 0, j = 0, len1 = 0, len2 = 0, total_len;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

if (n >= len2)
n = len2;

total_len = len1 + n;

concat = malloc(total_len + 1);
if (concat == NULL)
return (NULL);

while (i < len1)
{
concat[i] = s1[i];
i++;
}

while (j < n)
{
concat[i] = s2[j];
i++;
j++;
}

concat[i] = '\0';

return (concat);
}
