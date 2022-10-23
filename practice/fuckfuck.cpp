#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",n);
	while(n>=10)
	{
		n=n/10;
		printf("%d\n",n);
	}

}
