#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char n[10];
	int a=0;
	scanf("%s",n);
	for(int i=strlen(n);i>0;i--)
	{
		n[i]='\0';
		printf("%s\n",n);
		
	}
}
