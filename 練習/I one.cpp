#include <stdio.h>
#include <stdlib.h>
int main()
{
	int N,a=0,b=0,c=0,B;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%d",&B);
		if(B==1)
		{
			++a;
		}
		else if(B==2)
		{
			++b;
		}
		else
		{
			++c;
		}
	}
	for(int i=0;i<a;i++)
	{
		printf("1 ");
	}
		for(int i=0;i<b;i++)
	{
		printf("2 ");
	}
		for(int i=0;i<c;i++)
	{
		printf("3 ");
	}
}
