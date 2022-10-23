//left side+right side+up+down+middle+all
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		printf("%d\n",n * (n - 1) +2);
	}
}
