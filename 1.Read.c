#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

char* doStuff(char* line){
    return line;
}

int main(void)
{
    char *line = malloc(sizeof(char)*LINE_MAX);
    while(fgets(line, LINE_MAX, stdin)!= NULL)
    {
        line = doStuff(line);
        printf("%s", line);
    }
    return 0;
}

