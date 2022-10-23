#include <stdio.h>
#include <stdlib.h>
int main()
{
	int X;
	scanf("%d",&X);
	int H=0;
	if(X==1)
	{
		printf("1");
	}
	for(int i=X;i>0;i--)
	{
		H=((i-1)+i*i-i+1)+H;
	}
	printf("%d",H);
}
