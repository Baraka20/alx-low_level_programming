#include "main.h"

/*
*main - print lowercase alphabet
*
*Return: Always 0 (Success)
*/
void print_alphabet(void);
{
char alphabet = 'a';
while  (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
return (0);
}
