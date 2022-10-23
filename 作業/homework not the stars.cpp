#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&b,&a);
    c=b-a;
	if(a==b)
   	{
   		a=a-3;
   		c=b-a;
   	}
    if(a>c)	
   	{
   		printf("%d+%d=%d",b-a,a,b);
   	}
    else if(c>a)
   	{
   		printf("%d+%d=%d",a,b-a,b);
   	}
   	else
	{
   		printf("%d+%d=%d\n",b-a,a,b);
   	}
 	return 0;
}
  

