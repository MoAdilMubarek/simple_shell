#include "shell.h"

/**
 * main - Entry point
 * Return: 0 or 1
 */

int main(void)
{
	ssize_t ret;
	char *str;
	size_t size;

	prompt();

	while ((ret = getline(&str, &size, stdin)) != -1)
	{
		prompt();

		if (ret == 1)
		{
			continue;
		}
		execute(str);
	}

	if (ret == -1)
	{
		if (feof(stdin))
		{
			free(str);
			return (1);
		}
		else
		{
			perror("Error:");
		}
	}
	free(str);
	return (0);
}

