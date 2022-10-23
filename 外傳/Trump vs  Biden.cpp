#include <stdio.h>
#include <stdlib.h>
int main()
{
	int y,W,X=5;  
	for(W=0;W<X;W++)
	{	printf("Do you support Biden?\n");
	printf("Yes=1,No =0\n");
	printf("Please input a number\n");
	scanf("%d",&y);
	if(y==1)
	{
	printf("That's good.\n");
	}
	
	else if(y==0){
		printf("So you support Trump?\n");
	}else{
		printf("I don't understand\n");
	}  
	}

	system("PAUSE");
	return 0; 
}
	 
  
 
