#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "je m'appelle khady";
	
	char delim[] = " ";

	char *ptr = strtok(str, delim);

	while(ptr != NULL)
	{
		printf("'%s'\n", ptr);
		ptr = strtok(NULL, delim);
	}

	return 0;
}
