#include <stdio.h>
#include <stdlib.h>
int main()
{
	int N,k,m;
	scanf("%d",&N);
	k=N-1;
	m=N-(N-1);
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<k;j++)
		{
			printf("_");
		}
		for(int y=0;y<m;y++)
		{
			printf("*");
		}
		printf("\n");
		k=k-1;
		m=m+1;
	}
}
