#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,d,i=0;
	scanf("%d%d%d",&a,&b,&c);
	d=(b-a)/c;
	while(i<d+1)
	{
		printf("%d ",a);
		a=a+c;
		++i;
	}
	return 0;
}

