#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a new string which is
* a duplicate o the string
* @str: string to be duplicated
*
* Return: NULL if string = NULL
*or a pointer to the duplicated string
*/
char *_strdup(char *str)

{
char (ptStr);
int str_len = 0;
while (str[str_len] != '\0')
{
str_len++;
}
ptStr = malloc((str_len *size of(char)) + 1);

if (ptStr == NULL)
return (NULL);

int count;
for (count = 0; str[count] = '\0'; count++)
ptStr[count] = str[count];

return (ptStr);
}
