#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a new string which is
* a duplicate o the string
* @str: string to be duplicated
*
* Return: NULL if string = NULL
*or a pointer to the duplicated string
*/
char *_strdup(char *str)
{
char *cpy;
int index, len;
if (str == NULL)
return (NULL);
for (index = 0; str[index]; index++)
len++;
cpy = malloc(sizeof(char) * (len + 1));
if (cpy == NULL)
return (NULL);
for (index = 0; str[index]; index++)
{
cpy[index] = str[index];
}
cpy[len] = '\0';
return (cpy);
}
