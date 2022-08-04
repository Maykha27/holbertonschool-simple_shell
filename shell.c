#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>




int main()

{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;
	char *token;
	int i;
	char **args;


	while ((nread = getline(&line, &len, stdin)) != -1)
	{
		i = 0;
		token = strtok(line, " \n");

		if (token == NULL)
			continue;

		args = malloc(sizeof(char *) * 1024);

		while (token != NULL)
		{
			args[i] = token;
			token = strtok(NULL, " \n");
			i++;
		}

		if (fork() == 0)
		{
			if (execve(args[0], args, NULL) == -1)
			{
				perror("Error:");
			}
		}


		wait(NULL);
        free(args);
    }

	free(line);
	exit(EXIT_SUCCESS);
}
