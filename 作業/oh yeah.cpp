#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,num=0;
	while (scanf("%d",&n)!=EOF)
	{    if(n==0)
	{
		break;
	}
	
		for( int i=1;i<n;i++)
		{
			if(i%7==0)
			{
				printf("");
			}
			else{
				printf("%d ",i);
			}
			
		}printf("\n");
	}return 0;
}
