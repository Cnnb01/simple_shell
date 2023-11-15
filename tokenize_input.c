#include "main.h"
/**
*tokenize_input - Tokenizes the input string
*@input: The input string
*Return: The tokenized input
*/
char **tokenize_input(char *input)
{
int i = 0;
int j;
char *token = NULL;
char **arg = malloc(sizeof(char *) * 10);
if (arg == NULL)
{
return (NULL);
}
token = strtok(input, " \n\t\r");
while (token != NULL)
{
arg[i] = malloc(sizeof(char) * (m_strlen(token) + 1));
if (arg[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(arg[j]);
}
free(arg);
perror("malloc error");
exit(EXIT_FAILURE);
}
m_strcpy(arg[i], token);
i++;
token = strtok(NULL, " \n\t\r");
}
arg[i] = NULL;

/*free(input);added*/

return (arg);
}
