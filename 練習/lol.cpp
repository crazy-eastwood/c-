#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,D,p=0:
	int a[100];
	scanf("%d%d",&n,&D);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]+D<=a[p])
		{
			printf("%d",a[p]-a[i]);
		}
		else
		{
			p++;
		}
		p++;	
	}

	
}
