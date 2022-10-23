#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,D;
	scanf("%d %d",&n,&D);
	int a[n];
	int profit = 0;//?? 
	int holdstock = 0;//???????? 
	int buyprice = 0,sellprice = 0;//?????????? 
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(i == 0 || (holdstock == 0 && a[i] <= (sellprice - D)))//buy
		{
			holdstock = 1;
			buyprice = a[i];
		}
		else if(holdstock == 1 && a[i] >= (buyprice + D))//sell 
		{
			holdstock = 0;
			profit += a[i]-buyprice;
			sellprice = a[i];
		}	
	}
	printf("%d",profit);
	return 0;		
}
