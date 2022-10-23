#include  <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{	int k=1;
		char n[100];
		scanf("%s",n);
		int j=strlen(n)-1;
		for(int u=0;u<strlen(n);u++)
		{
			k=(n[j]-'0')*k;
			j--;
		
		}
		printf("%d\n",k);
	}
}
