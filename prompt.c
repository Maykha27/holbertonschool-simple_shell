#include <stdio.h>
#include <stdlib.h>

int main(void)

{
	char *buffstring;
	size_t len;

	buffstring = malloc (sizeof(char)*1024);

	while (1)
	{
	printf("$ ");
	getline (&buffstring,&len,stdin);
	printf("%s", buffstring);
	}
}
