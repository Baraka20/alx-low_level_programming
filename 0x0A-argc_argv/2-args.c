#include <stdio.h>

/**
* main - [prints name of program
* @argc: shows number of command line arguments
* @argv: contains the command line arguments
*
* Return: always 0
*/

int main(int argc, char *argv[])
{
int i;
printf("Let's see what is in argv[]\n");
for (i = 0; i < argc; i++)
{
printf("argv[%d] = %s\n", i, argv[i]);
}
return (0);
}
