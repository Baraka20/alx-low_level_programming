#include <stdio.h>

/*
*main - Entry point
*
*Return: Always 0 (Success)
*/int main(void)

{
char lower_case = 'a';
char upper_case = 'A';

while (lower_case <= 'z')
{
putchar(lower_case);
alphabet++;
}

while (upper_case <= 'Z')
{
putchar(upper_case);
alphabet++
}

putchar('\n');
return (0);
}
