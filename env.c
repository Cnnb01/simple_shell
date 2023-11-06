#include "main.h"
/**
* env_variables - function that displays environment variables
*/
void env_variables(void)
{
int i;
char v_newline = '\n';

for (i = 0; environ[i] != NULL; i++)
{
write(1, environ[i], m_strlen(environ[i]));
}
write(1, &v_newline, 1);
}
