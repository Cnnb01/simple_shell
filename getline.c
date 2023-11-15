#include "main.h"
/**
* main - Entry point for the simple shell program
*
* Return: 0 on success, an error code on failure
*/
int  main(void)
{
char **arg;
char *input;
char *get_input(void);
char **tokenize_input(char *input);
void execute_command(char **arg);
void freemem(char **arg);
while (1)
{
input = get_input();
arg = tokenize_input(input);
execute_command(arg);

free(input);
free(arg); 
arg = NULL;
}
freemem(arg);
return (0);
}
