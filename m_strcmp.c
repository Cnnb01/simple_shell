#include "main.h"
/**
* m_strcmp - custom string compare function
* @string1: The first string to be compared
* @string2: the second string to be compared
* Return: returns zero when the strings are the same
* and -1 or 1 when they are not equal
*/
int m_strcmp(const char *string1, const char *string2)
{
while (*string1 != '\0' || *string2 != '\0')
{
if (*string1 != *string2)
{
if (*string1 > *string2)
{
return (1);
}
else
{
return (-1);
}
}
string1++;
string2++;
}
return (0);
}
