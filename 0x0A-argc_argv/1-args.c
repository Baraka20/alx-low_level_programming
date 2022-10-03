#include <stdio.h>

/**
* main - prints name of program
* @argc: shows number of command line arguments
* @argv: contains the command line arguments
*
* Return: always 0
*/

int main(int argc, char *argv[] __attribute__ ((unused)))
{
printf("argc = %d\n", argc - 1);
return (0);
}
