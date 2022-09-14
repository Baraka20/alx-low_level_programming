#include "main.h"
/*
*Print  last digit of number
*
*Return: value of last digit
*/int print_last_digit(int n)
{
int x;
if (n < 0)
n = -n;
x = n % 10;
_putchar(x + '0');
return (x);
}
