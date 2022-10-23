#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int score,score1,i,n;
	while(	scanf("%d",&n)!=EOF){
		
	for(i=0;i<n;i++) 
	{	
		score1=0;
		scanf("%d",&score);
		score1=score1+score;
	}
	if(score>59*n)
	{
		printf("no\n");
		}	
		else if(score1<=59*n){
			printf("yes\n");
		}
		
	}
return 0;
	
}
