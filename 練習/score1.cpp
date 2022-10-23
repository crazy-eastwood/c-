#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{	
	int a=1,score1=0;
	int score[10];
	for(int i=0;i<10;i++)
	{	
		printf("PLEASE INPUT %d Score",a);
		scanf("%d",&score[i]);
		++a;
		score1=score1+score[i];
	}
	
	printf("%f",(float)score1/10);
	return 0;

	
	
	 
}
