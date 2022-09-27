#include "main.h"

/**
* _strchr - locates a character in a string
* @s: string to check
* @c: character to check for
* Return: pointer to matched character
*/
char *_strchr(char *s, char c)
{
int i;

for (i = 0; *(s + i); i++)
{
if (*(s + i) == c)
return (s + i);
}
if (*(s + 1) == c)
return  (s+1);
return (0);
}
