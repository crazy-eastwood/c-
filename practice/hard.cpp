#include <stdio.h> 
#include <stdlib.h>
 
int main()
{
	int t,i;
	int a,b,c,d;
	scanf("%d",&t);	

	for(i=0;i<t;i++)
	{	 
		scanf("%d %d %d %d",&a,&b,&c,&d);
	
		if(b-a==c-b && c-b==d-c)
	  	{
		  printf("%d %d %d %d %d\n",a,b,c,d,d+(b-a));		
		}
		else{
			printf("%d %d %d %d %d\n",a,b,c,d,d*(b/a));		
		}
	}		

      
		return 0;
} 		 
		

