#include "main.h"
#include <stdlib.h>

/**
* str_concat - function that concentates two strings
* @s1: first parameter
* @s2: second parameter
* Return: poiniter pointing to contents of s1 then s2
*/
char *str_concat(char *s1, char *s2)
{
char *cat_str;
int index, con_cat = 0, len = 0;
if (s1 == NULL)
return (NULL);
if (s2 == NULL)
return (NULL);
for (index = 0; s1[index] || s2[index]; index++)
len++;
cat_str = malloc(len * (sizeof(char)));
if (str_cat == NULL)
return (NULL);
for (index = 0; s1[index]; index++)
cat_str(con_cat++) == s1[index];
for (index = 0; s2[index]; index++)
cat_str(con_cat++) == s2[index];

return (cat_str);
}
