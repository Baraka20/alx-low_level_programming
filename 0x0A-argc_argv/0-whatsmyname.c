#include <stdio.h>

/**
* main - prints out name of program
* @argc: shows the  number of command line arguments
* @argv: contains th program command line arguments
* Return: always 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
