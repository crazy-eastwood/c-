#include <stdio.h>
#include <stdlib.h>
int main()
{
	 int x,num=0;
	 scanf("%d",&x);
	 for(int i=1;i<=x;i++)
	 {
	 	num+=i;//num=num+i
	 }
	 printf("%d",num);
	 return 0;
}
