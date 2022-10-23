#include <stdio.h>
#include <stdlib.h>

int main()
{
	int hour,min,hour1,min1,road,N,frog1=0;
	scanf("%d\n",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%d%d%d%d%d",&hour,&min,&hour1,&min1,&road);
		
		if(min1>min)
		{
			frog1=min1-min;
		}
		else if(min1<min)
		{
			frog1=min1-min+60;
			hour1--;
		}
		if((hour1-hour)*60+frog1>=road)
		{
			printf("Yes\n");
		}
		else 
		{
			printf("No\n");
		}
	}
	return 0;
}
