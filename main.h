#ifndef MAIN_H
#define MAIN_H
#define BUFSIZE 1024
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>

void freemem(char **arg);
char *m_strcpy(char *dest, const char *src);
int m_strcmp(const char *string1, const char *string2);
int m_strlen(char *string);
void env_variables(void);
extern char **environ;
char *find_command(const char *cmd);
void execute(char **arg);

#endif
