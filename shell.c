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
    int child = 0;

    char **args = malloc(sizeof(char *) * 1024);


    while ((nread = getline(&line, &len, stdin)) != -1)
    {

        i = 0;
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
    void  openHelp () {
    puts ( " \n ***READ THE INSTRUCTIONS BELLOW*** "
        " \n List of Commands supported: "
        " \n >cd "
        " \n >mkdir "
        " \n >rmdir "
        " \n >echo "
        " \n >pwd "
        " \n >help "
        " \n >date "
        " \n >exit "
        " \n >ls "
        " \n >python "
        " \n >clear "
        " \n " );

    char * username =  getenv ( " USER " );
    printf ( " User is: @ %s " , username);
    printf ( " \n " " \n " );

    return ;
    }
}
