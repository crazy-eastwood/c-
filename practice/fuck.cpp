#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char fuck[10000];
	char shit[10000];
	gets(fuck);
	strcpy(shit,fuck);
	printf("%s %s",shit,fuck);
	return 0;
}
