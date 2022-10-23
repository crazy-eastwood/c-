#include <stdio.h>
#include <stdlib.h>
int main()
{
	int N,s;
	while(scanf("%d%d",&N,&s)!=EOF)
	{
		if(s==0)
		{
			if(N==0)
			{
				printf("Ok!\n");
			}
			else
			{
				printf("Impossib1e!\n");
			}
		}
	 
		else if(N%s==0)
		{
			printf("Ok!\n");
		}
		else
		{
			printf("Impossib1e!\n");
		}
	}
	
}
 
