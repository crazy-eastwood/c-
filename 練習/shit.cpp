#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,x=-1,i,c;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&c);
		if(c>x)
		{
			x=c;
		}
	}
	printf("%d",x);
}
