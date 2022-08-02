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
    int i = 0;
    int child = 0;

    char **args = malloc(sizeof(char *) * 4);


    while ((nread = getline(&line, &len, stdin)) != -1)
    {


        token = strtok(line, " \n");
        child = fork();

         while (token != NULL)
        {
            args[i] = token;
            token = strtok(NULL, " \n");
            i++;
        }

        if (child == 0)
        if (execve(args[0], args, NULL) == -1)
        {
            perror("Error:");
        }
		wait(NULL);

    }

    free(line);
    free(args);

    exit(EXIT_SUCCESS);
}
