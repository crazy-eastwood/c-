#include <stdio.h>
#include <stdlib.h>
int main()
{
	int M,D;
	
	scanf("%d",&M);
	
	scanf("%d",&D);
	//printf("%d",(M*2+D)%3);
	if((M*2+D)%3<1)
	{
		printf("´¶³q");
	}
	else if((M*2+D)%3==1)
	{
		printf("¦N");
		
	}else if((M*2+D)%3==2)
	{
		printf("¤j¦N");
	 } 
	
    return 0; 
 } 
