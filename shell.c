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
	char *array[2];
	char *buffstring;
	size_t len;
	int forkchild;
	int status;

	buffstring = malloc (sizeof(char)*1024);

	while (1)
	{
	printf("$ ");
	getline (&buffstring,&len,stdin);
	array[0] = buffstring;
	array[1] = NULL;
	buffstring [strlen(buffstring) -1] = '\0';
	forkchild = fork ();


	if (forkchild == 0)

		{
		execve(array[0], array, NULL);
		}

		wait(&status);
	}

}
