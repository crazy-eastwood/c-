#include <stdio.h>
#include <stdlib.h>
int main()
{
	int c,s;
	scanf("%d%d",&c,&s);

	 if(s==0)
	{
		printf("OK!");
	}

	else if(c%s==0)
	{
		printf("OK!");
	}
	
	
	else if(c>0&&s>0)
	{  
		printf("%d",c%s);
	}
	
}
