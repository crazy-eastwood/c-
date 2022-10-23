#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n=1,k;
    for( k=1;k<=7;k++)
    {    
        for (int i = 0; i < k; i++)
        {
           
			printf("%d ",n);
			 n=n+2;
        }
        printf("\n");
    }


  
    return 0;

}




