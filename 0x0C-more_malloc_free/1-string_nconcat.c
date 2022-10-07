#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - function that concentates two strings
* @s1: first parameter
* @s2: second parameter
* @n: number of bytes of s2 to copy
* Return: poiniter pointing to contents of s1 then s2
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int a, b, c;
if (s1 == NULL)
a = 0;
else
{
for (a = 0; s1[a]; a++)
}
if (s2 == NULL)
b = 0;
else
{
for (b = 0; s2[b]; b++)
}
if (b > n)
b = n;
s = malloc(sizeofchar) * (a + b + 1);
if (s == NULL)
return (NULL);
for (c = 0; c < a; c++)
s[c] = s1[c];
for (c = 0; c < b; c++)
s[c + a] = s2[c];
s(a + b) = '\0';
return (s);
}
