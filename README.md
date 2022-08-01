# holbertonschool-simple_shellSimple shell
The simple shell consists of designing a C program to serve as an interface to the environment that accepts commands from the user and then executes each command in a separate process. Your application will allow for input and redirection of output, as well as piping as a form of CPI between a pair of commands. The completion of this project will consist of using UNIX (fork(), exec(), wait(), ...system calls and can be completed on a Linux system.
Pre-requisites
Authorized functions and macros:
    • access (man 2 access)
    • chdir (man 2 chdir)
    • close (man 2 close)
    • closedir (man 3 closedir)
    • execve (man 2 execve)
    • exit (man 3 exit)
    • _exit (man 2 _exit)
    • fflush (man 3 fflush)
    • fork (man 2 fork)
    • free (man 3 free)
    • getcwd (man 3 getcwd)
    • getline (man 3 getline)
    • isatty (man 3 isatty)
    • kill (man 2 kill)
    • malloc (man 3 malloc)
    • open (man 2 open)
    • opendir (man 3 opendir)
    • perror (man 3 perror)
    • read (man 2 read)
    • readdir (man 3 readdir)
    • signal (man 2 signal)
    • stat (__xstat) (man 2 stat)
    • lstat (__lxstat) (man 2 lstat)
    • fstat (__fxstat) (man 2 fstat)
    • strtok (man 3 strtok)
    • wait (man 2 wait)
    • waitpid (man 2 waitpid)
    • wait3 (man 2 wait3)
    • wait4 (man 2 wait4)
    • write (man 2 write)
GCC command to compile:
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
This wil compile all the '.c' files and change the output's name to 'hsh'.
Template to test output:
============= $ ./hsh
($)
hsh main.c shell.c
$ exit $
After you clone this repository and compile the program with the command above, you will generate a file called hsh that can be executed by entering ./hsh in your shell.
The output after the program is executed should look something like this:
####$|
Where you will get a prompt in the shape of a dollar sign so you can start typing commands into your shell. Agood example of how it should execute is the command shown above were the user enters 'ls' and then gets a list of the directory contents.
##Function Prototypes:
Brief description of functions contained in project:
##buffstring:
##getline: is a standard library function that is used to read a string or a line from an input stream. It is a part of the <string> header
##stdin:  he use if your scripts are being piped or redirected.
forkchild
exercve
wait
