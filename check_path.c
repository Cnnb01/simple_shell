#include "main.h"
/**
* find_command - function that executes commands both with
* specified path and command alone
* @cmd: constant character being checed
* Return: returns null when command not executable
*/
char *find_command(const char *cmd)
{
char *path;
char *path_cpy;
char *token;
char *full_path;

path = getenv("PATH");
path_cpy = strdup(path);
token = strtok(path_cpy, ":");

while (token != NULL)
{
full_path = malloc(strlen(token) + strlen(cmd) + 2);
m_strcpy(full_path, token);
strcat(full_path, "/");
strcat(full_path, cmd);

if (access(full_path, X_OK) == 0)
{
free(path_cpy);
return (full_path);
}

free(full_path);
token = strtok(NULL, ":");
}
free(path_cpy);
return (NULL);
}
