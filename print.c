#include "shell.h"

/**
 * print - print string to stdout
 * @str: pointer
 * Return: No thing
 */

void print(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	write(1, str, i);
}
