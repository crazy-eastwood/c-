#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char n[10000];
	while(scanf("%s",n)!=EOF)
	{	long long int b=0;
		if(n[0]=='-')
		{
			for(int i=1;i<strlen(n);i++)
			{
				b=n[i]+b;
			}
			if(b%3==0)
			{
				printf("yes\n");
			}
			else{
				printf("no\n");
			}
		}
		else{
			
			for(int i=0;i<strlen(n);i++)
			{
				b=n[i]+b;
			}
			if(b%3==0)
			{
				printf("yes\n");
			}
			else{
				printf("no\n");
			}
		}
	
	}

}
