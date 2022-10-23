#include <stdio.h>
#include <stdlib.h>
int max(int ,int );
int min(int ,int);
int main()
{
	int n,d,a,b,c,m=0,h=0,k=0,p=0;
	scanf("%d%d",&n,&d);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d%d\n",&a,&b,&c);
		m=max(max(a,b),c);
		h=min(min(a,b),c);
		if(m-h>d)
		{
			k=k+((a+b+c)/3);
		p++;
		}
	
	}
	printf("%d %d",p,k);
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
int min(int tiny,int small)
{
	if(tiny<small)
	{
		return (tiny);
	}
	else
	{
		return (small);
	}
}
