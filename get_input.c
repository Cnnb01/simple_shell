#include "main.h"
/**
*get_input - Gets input from the user
*
*Return: a pointer to the input string
*/
char *get_input(void)
{
char *input = NULL;
size_t buf = 0;
ssize_t rebyte;
int interactive = 1;

interactive = isatty(STDIN_FILENO);
if (interactive != 0)
write(1, "#cisfun$ ", 9);
rebyte = getline(&input, &buf, stdin);

if (rebyte == -1)
{
perror("getline error");
free(input);
return (NULL);
}

if (rebyte > 0 && input[rebyte - 1] == '\n')
input[rebyte - 1] = '\0';

return (input);
}
