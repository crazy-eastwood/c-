#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(b>a)
	{
		printf("%d",b-a);
	}
	else if(b==a)
	{
		printf("0");
	}
	else if(b<a)
	{
		printf("%d",100-a+b);
	}
}
