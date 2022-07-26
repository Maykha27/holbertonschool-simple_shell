#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
    int my_pid;

    my_pid = getpid();
    printf("%d\n", my_pid);
    return (0);
}
