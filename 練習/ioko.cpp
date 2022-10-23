#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char a[100];
	while(scanf("%d",a)!=0)
	{	int b=0;char k[100];
	k=a;
	for(int i=0;i<strlen(k);i++)
	{
			for(int i=0;i<strlen(a);i++)
		{
			b=a[i]+b;
			
		}
		if(b<10)
		{
			printf("%d",b);
		}
		
		k=b;
	}
	
		
}
