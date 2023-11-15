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
int interactive = isatty(STDIN_FILENO);

if (interactive != 0)
write(1, "#cisfun$ ", 9);
if (!interactive)
{
input = malloc(BUFSIZE);
if (input == NULL)
{
perror("malloc error");
exit(EXIT_FAILURE);
}
rebyte = read(STDIN_FILENO, input, BUFSIZE);
if (rebyte == -1)
{
perror("read error");
free(input);
exit(EXIT_FAILURE);
}
}
else
{
rebyte = getline(&input, &buf, stdin);
if (rebyte == -1)
{
perror("getline error");
/*free(input);*/
exit(EXIT_FAILURE);
}
}
if (rebyte > 0 && input[rebyte - 1] == '\n')
input[rebyte - 1] = '\0';

return (input);
}
