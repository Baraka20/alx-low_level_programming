#include "main.h"
#include <string.h>

/**
*reverse_array - function that reverse content of array
*@a: array
*@n: number of elements
*/

void reverse_array(int *a, int n)
{
int temp, i;

for (i = n - 1; i > n / 2; i--)
{
temp = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = temp;

}
