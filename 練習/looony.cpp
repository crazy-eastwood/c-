#include <stdio.h>
#include <stdlib.h>
int main()
{
	
	int a,b,c,d; 
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d %d %d %d",&a,&b,&c,&d);
			if(a==0)
			{
				
				if(b==0)
				{
					printf("C");
					
				}
				else if(c==0)
				{
					printf("A");
				}
				else{
					printf("B");
				}
			}
			else
			{
				if(b==0)
				{
					printf("E");
					
				}
				else if(d==0)
				{
					printf("F");
				}
				else
				{
					printf("D");
					
				}
			}
		}
	printf("\n");
	}
/*A  -> 0 1 0 1

B  -> 0 1 1 1

C  -> 0 0 1 0

D  -> 1 1 0 1

E  -> 1 0 0 0

F  -> 1 1 0 0*/
return 0;
	
}
