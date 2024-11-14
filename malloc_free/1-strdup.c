#include "main.h"

/**
*_strdup - function returns a pointer to a new string
*to a new string which is a duplicate of the string str.
*@str: This is a pointer to a character or a string.
*
*Return:1 A pointer to the duplicated string.
**/

char *_strdup(char *str)
{
char *dup;
int i, len = 0;

if (str == NULL)
return (NULL);


while (str[len] != '\0')
len++;
dup = malloc(sizeof(char) * (len + 1));

if (dup == NULL)
return (NULL);

for (i = 0; i < len; i++)
dup[i] = str[i];

dup[len] = '\0';

return (dup);
}
