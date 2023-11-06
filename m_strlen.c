#include "main.h"
/**
* m_strlen - function that returns length of a string
* @string: Pointer to the string whose lenth is to be
* counted
* Return: returns the lenth of string passed
*/
int m_strlen(char *string)
{
int i;

i = 0;
while (*string != '\0')
{
i++;
string++;
}
return (i);
}
