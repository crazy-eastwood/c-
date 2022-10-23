#include <stdio.h>
#include <stdlib.h>
int f(int r)
{
	int g=0;
	while(r!=0)
	{ 
		g=r%10+g;
		r=r/10;
	}	
	return g;

}
int main()
{
	int N;
	scanf("%d",&N);
	while(3)
	{	int j;
if(N==0)
{
break;
}
		while(N>=10)
		{
			N=f(N);
		}
		printf("%d\n",N);
		scanf("%d",&N);
	}
}
