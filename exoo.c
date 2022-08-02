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

int main(void)
{

    pid_t child_pid = 1;
    int i = 0;
    int status;
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};
   for (i = 0; i < 4; i++)
   {
        child_pid = fork();
        if (child_pid == -1)
        {
            printf("error");
            return (1);
		}
		if (child_pid == 0)
		{
		execve(argv[0], argv, NULL);
		}
		wait(&status);
		printf("After execve\n");
	}
	return (0);
}
