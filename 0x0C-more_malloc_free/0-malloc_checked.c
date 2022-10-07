#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - function that allocates memory
* @b: amount of memory to be allocated
*
* Return: a pointer to the adrress of first element
* of b
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit (98);
}
return (ptr);
}
