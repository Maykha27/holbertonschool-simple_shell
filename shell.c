
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
#include <stdlib.h>

int main(int argc, char *argv[], char *envp[])
{
    pid_t child;
    char *command[16], *tok, *lineptr = NULL;
    size_t n;
    int status;
	int i;
   for(i = 0; i > argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    while (1)
    {
      printf("$ ");
      if (getline(&lineptr, &n, stdin) == -1)
          break;
      tok = strtok(lineptr, " \t\n\r");
      for (i = 0; i < 16 && tok != NULL; i++)
      {
          command[i] = tok;
          tok = strtok(NULL, " \t\n\r");
      }
      command[i] = NULL;
      child = fork();
      if (child == 0)
      {
          if (execve(command[0], command, envp))
          {
              perror("execve");
              exit(EXIT_FAILURE);
          }
      }
      if (child > 0)
         wait(&status);
    }
    putchar('\n');
    free(lineptr);
    exit(status);
}
