#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,k;
	scanf("%d",&n);
    for( k=1;k<=n;k++)
	{	
		for (int i = 0; i < k; i++)
		{
        	printf("*");
    	}
    	printf("\n");
	}


  
    return 0;

}
