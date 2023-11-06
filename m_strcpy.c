#include "main.h"
/**
* m_strcpy - string copy function
* @dest: pointer to string to be copied into
* @src: pointer to string to be copied
* Return: returns the strings stored in dest
*/
char *m_strcpy(char *dest, const char *src)
{
char *originaldest;

if (dest == NULL || src == NULL)
{
return (NULL);
}

originaldest = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return (originaldest);
}
