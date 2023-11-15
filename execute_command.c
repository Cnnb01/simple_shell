#include "main.h"
/**
* execute_command - Executes the command from the tokenized input
*
*@arg: The tokenized input
*/
void execute_command(char **arg, char *input)
{
int interactive = 1;
int arg_length = 0;
if (arg == NULL || arg[0] == NULL)
return;
if (m_strcmp(arg[0], "exit") == 0)
{
freemem(arg);
exit(EXIT_SUCCESS);
}
if (m_strcmp(arg[0], "env") == 0)
{
env_variables();
return;
}
while (arg[arg_length] != NULL)
{
arg_length++;
}
if (arg_length > 1 && interactive == 0)
{
return;
}
execute(arg);
free(input);/*added*/
if (arg_length > 1)
freemem(arg);
/*free(arg);added*/
}
