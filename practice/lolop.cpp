#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF)
	{ 
		int num=0,total=0;
		while(1)
		{
				num++;
		total=n+total;
		n++;
			if(m<total)
			{
				break;
			}
		}
	printf("%d\n",num);
	}
}
