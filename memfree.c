#include "main.h"
/**
* freemem - function that frees memory
* @arg: pointer to the element entered to be freed
*/
void freemem(char **arg)
{
int j;

if (arg == NULL)
return;
for (j = 0; arg[j]; j++)
{
if (arg[j] != NULL)
{
free(arg[j]);
}
}
if (arg != NULL)
free(arg);
}
