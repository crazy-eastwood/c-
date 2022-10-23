#include <stdio.h>
#include <stdlib.h>
int main()
{
	int c;
	while(scanf("%d",&c)!=EOF)
	{
		if(c>=0)
		{
			if(c%3==0)
			{
				printf("yes\n");
			}
			else{
				printf("no\n");
			}
		}
		else if(c<0)
		{
			c=c*(-1);
				if(c%3==0)
			{
				printf("yes\n");
			}
			else{
				printf("no\n");
			}
		}
		
	}
}
