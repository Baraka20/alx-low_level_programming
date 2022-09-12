#include  <stdio.h>
#include <string.h>
/*
*main - Entry point
*
*Return: Always 0 (Success)
*/int main(void)

{
int i;
char string[] = "0123456789abcdef";
int len = strlen(string);

for (i = 0; i < len; i++)
{
putchar(string[i]);
}
putchar('\n');
return (0);
}
