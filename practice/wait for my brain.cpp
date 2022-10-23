#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int N,fat=0,x;
	char pig[100];
	scanf("%s",pig);
	N=strlen(pig);
	for(x=N-1;x>=0;x--)
	{
		fat=fat*10;
		pig[x];
	}
}
