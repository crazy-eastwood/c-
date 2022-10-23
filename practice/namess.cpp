#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[10000];
	gets(str);	
	printf("Go, %s, go go",str);
	return 0;
}
