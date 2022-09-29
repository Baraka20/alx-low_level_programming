#include "main.h"

/**
* wildcmp - compares two strings
* @s1: parameter 1
* @s2: parameter 2
*
* Return: the result of comparison
*/

int wildcmp(char *s1, char *s2)
{
if (*s1 == *s2)
return (1);
else
return (0);
}
