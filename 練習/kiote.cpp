#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,d=0;
	scanf("%d%d",&a,&b);
	c=b-a+1;
	for(int i=0;i<c;i++)
	{
		if(a%2==0)
		{
			d=d+a;
		}
		a++;
	}
	printf("%d",d);
	
}
