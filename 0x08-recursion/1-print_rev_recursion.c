#include "main.h"

/**
*_print_rev_recursion - prints string reverse  recursively
* @s: string parameter
*
* Return: vod
*/

void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;
s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
}
