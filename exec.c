#include "shell.h"

/**
 * execute - execute an user command
 * @str: pointer
 * Return: no thing
 */

int execute(char *str)
{
	char *argv[128], *token;
	int count, execRet, status;
	pid_t child_pid;

	token = strtok(str, " ");
	for (count = 0; token != NULL; count++)
	{
		argv[count] = token;
		token = strtok(NULL, " ");
	}
	argv[count] = NULL;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error: ");
		return (1);
	}
	if (child_pid == 0)
	{
		execRet = execve(argv[0], argv, NULL);
		if (execRet == -1)
		{
			perror("./shell:");
		}
	}
	else
	{
		wait(&status);
	}
	return (0);
}
