#include <stdio.h>
#include <stdlib.h>
int main()
{
	int year,month,day,year1,month1,day1;
	
	while(1)
	{
		scanf("%d%d%d",&year,&month,&day);
		scanf("%d%d%d",&year1,&month1,&day1);
		if(year==year1&&month==month1)
		{
			printf("%d",day-day1);
		}
		else if(year==year1&&month==1)
	
	}
}
