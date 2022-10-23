#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,n,g=0;
	scanf("%d%d",&a,&b);
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{	int k,ans=0,ans1=0;
		while(1)
		{
			scanf("%d",&k);
			if(k==0)
			{
				break;
			}
			if(k==a)
			{
				ans++;
			}
			else if(k==b)
			{
				ans1++;
			}
			else if(k==-a)
			{
				ans--;
			}
			else if(k==-b)
			{
				ans1--;
			}
		}
		if(ans>0&&ans1>0)
		{
			g++;
		}
	
	}
	printf("%d",g);
}
