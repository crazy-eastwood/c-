#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,b,c,j;
	int arr[100];
	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<100;i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
	}
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&b,&c);
		j=0;int d=0;
		while(arr[j]<1000000)
		{
			if(b<=arr[j]&&arr[j]<=c)
			{
				printf("%d\n",arr[j]);
				d++;
			}
				if(b!=c&&c<=arr[j]&&arr[j]<=b)
			{
				printf("%d\n",arr[j]);
				d++;
			}
			j++;
			
		}printf("%d\n",d);
		if(i<n-1)
		{
			printf("------\n");
		}
	}
}
