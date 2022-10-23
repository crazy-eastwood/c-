#include <stdio.h>
#include <stdlib.h>
int max(int ,int);
int main()
{
	int n,p=0;
	scanf("%d",&n);
	int k[n];
	for(int i=0;i<n;i++)
	{
		int y=0,z=0;
		scanf("%d",k[p]);
		p++;	
	
	for(int u=0;u<n;u++)
	{
	
		z=z*10+k[y]%10; 
		k[y]=k[y]/10;
		
	
	}y++;	
	}
}
int max(int big,int huge)
{
	if(big>huge)
	{
		return (big);
	}
	else
	{
	   return (huge);
	}
}
