#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,k=1,m=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		m=k*k+m;
		k++;
	}
	printf("%d",m);
}
