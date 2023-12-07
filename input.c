#include "shell.h"

/**
 * input - recieve input from stdin
 * @str: pointer
 * Return: integer
 */

ssize_t input(char *str)
{
	size_t size;
	ssize_t ret;

	ret = getline(&str, &size, stdin);
	return (ret);
}
