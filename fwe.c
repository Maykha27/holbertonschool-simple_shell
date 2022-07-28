#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */

int main(void)
{
	char *av[] = {"/bin/ls", "-l", "/tmp", NULL};
	pid_t child_pid;
	int i, exe;

	for (i = 0; i < 5; i++)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			printf("Error");
			return (-1);
		}
		if (child_pid == 0)
		{
			exe = execve(av[0], av, NULL);
			if (exe == -1)
			{
				printf("Error");
				return (-1);
			}
		}
	}
	return (0);
}
