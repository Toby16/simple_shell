#include  "shell.h"

/**
  * readline - Reads user input from standard input
  * Return: line that was read, on success
  *         NULL failure
  */

char *readline(void)
{
	char *line = NULL;
	size_t bufsize = 0;
	int len = 0;

	len = getline(&line, &bufsize, stdin);
	if (len == -1)
	{
		free(line);
		return (NULL);
	}
	if (line[len - 1] == '\n')
		line[len - 1] = '\0';

	return (line);
}
