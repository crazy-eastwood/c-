#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	int n,a=0,b=0;
	scanf("%d",&n);
	int food[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&food[i]);
		a++;
		b=b+a*food[i];
	}
	printf("%d",b);
	return 0;
}
