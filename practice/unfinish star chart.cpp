#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,k,u;
	scanf("%d",&n);
	for(k=1;k<=n;k++)
	{
		for(i=0;i<n-k;i++)
		{
			printf("_");
		}
		printf("\n");
	}
	for( i=1;k<=n;k++)
	{	
		for (int i = 0; i < k; i++)
		{
        	printf("*");
    	}
    	printf("\n");
	}

}
