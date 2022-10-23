#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{	
		int k=0,p=0,b=1;
		for(int i=0;i<n;i++)
		{
			k=k+b+p;
			b=0,p++;
		}
		printf("%d\n",k);
	}

}
