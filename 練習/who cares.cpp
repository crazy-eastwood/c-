#include <stdio.h>
#include <stdlib.h>
int main()
{
	int c,w,num=0,num1=0;
	scanf("%d%d",&c,&w);
	num=c/12;
	if(c%12+w>12)
	{
		
		
		num=num+(c%12+w)/12;
	}
}
