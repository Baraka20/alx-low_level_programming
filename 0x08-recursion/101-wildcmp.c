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
if (*s1 == '\0')
return (*s1 == '\0');
if (*s2 == '*')
return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
return  (0);
}
