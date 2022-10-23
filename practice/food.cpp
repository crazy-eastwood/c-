#include <stdio.h>
#include <stdlib.h>
int main()
{
	int c,w,a=0;
	scanf("%d%d",&c,&w);
	while(c>=12)
	{
		c=c-12+1;
		a++;
		if(c+w-1>=13)
		{
			c=c+w-1;
		}
		
	}
}
