#include <stdio.h>
#include <stdlib.h>
int main()
{
	int k = 4;
	int N;
	scanf("%d",&N);
	int m = 1;
	for (int i=1; i<=N; i=i+1)
	{
		for (int j=1; j<=N-1; j=j+1)
		{
			printf ("_");
		}
		for (int j=1; j<=m; j=j+1)
		{
			printf ("*");
		}
		printf ("\n");
		k = k-1;
		m = m+1;
	}	
	return 0;
} 
