#include "main.h"
/**
* execute - function that handles child and
* parent processes
*
* @arg: pointer to command entered
*/
void execute(char **arg)
{
pid_t mpid;
int status;
char *cmd_path;

mpid = fork();

if (mpid == 0)
{
if (arg[0][0] == '/')
{
execve(arg[0], arg, environ);
}
else
{
cmd_path = find_command(arg[0]);
if (cmd_path != NULL)
{
execve(cmd_path, arg, environ);
perror("./mfine");
free(cmd_path);
}
else
{
perror("Command not found:");
exit(2);
}
}
}
else if (mpid > 0)
{
wait(&status);
}
else
{
perror("./mfine");
}
}
