#include <stdio.h>
#include <stdlib.h>
int max(int ,int );
int main()
{
 int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	d=max(max(a,b),c);
	printf("%d",d);
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
