#include  <stdio.h>

/*
*main - Entry point
*
*Return: Always 0 (Success)
*/int main(void)

{
char base_16 = 48;
while (base_16 <= 97)
{
putchar(base_16);
base_16++;
}
putchar('\n');
return (0);
}
