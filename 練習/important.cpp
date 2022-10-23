#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c;
	int arr[10];
	scanf("%d%d%d",&a,&b,&c);
	for(int i=0;i<10;i++)
	{
		arr[i]=0;
	}
	arr[a]++;
	arr[b]++;
	arr[c]++;
	int m=0;
	for(int i=0;i<10;i++)
	{
		if(m<arr[i])
		{
			m=arr[i];
		}
		
	}
	printf("%d ",m);
	for(int i=9;i>=0;i--)
	{
		if(arr[i]>0)
		{
			printf("%d ",i);
		}
	}
	
}
