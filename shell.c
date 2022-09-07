#include "shell.h"

/**
 * main - carries out the read, execute then print output loop
 * @ac: argument count
 * @av: argument vector
 * @envp: enviroment vector
 *
 * Return: 0
 */
int main(int ac, char **av, char *envp[])
{
	char *line = NULL, *pathcommand = NULL, *path = NULL;
	size_t bufsize = 0;
	ssizet_t linesize = 0;
	char **command = NULL, **paths = NULL;
	(void)envp, (void)av;

	if (ac < 1)
		return (-1);
	signal(SIGINT, handle_signal);

	while (1)
	{
		free_buffers(command);
		free_buffers(path);
	}
}
