#include "main.h"
#include <stdio.h>

/**
*_puts - function
*@str: parameter of function
*/
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
putchar(*str);
}
putchar('\n');
}
