#include <stdio.h>
#include <stdlib.h>
int main()
{
	int N,m=1,b,p=0;
	scanf("%d\n",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%d",&b);

	if(b>m)
	{
		p=(b-m)*3+p;
		m=b;
	}
	else
	{
		p=(m-b)*2+p;
		m=b;
	}
		}
		printf("%d",p);
}
