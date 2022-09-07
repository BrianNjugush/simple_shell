#include "shell.h"

/**
 * print_env - prints the enviroment string to stdout
 *
 * Return: 0
 */
void print_env(void)
{
	int x;
	char **env = environ;

	while (env[x])
	{
		write(STDOUT_FILENO, (const void *)env[x], _strlen(env[x]));
		write(STDOUT_FILENO, "\n", 1);
		x++;
	}
}
