#include <stdio.h>
#include <stdlib.h>
int main()
{
	int s,m,h;
	while(	scanf("%d%d%d",&h,&m,&s)!=EOF)
	{
		//25 100 4
	if(m<=h*s)
	{
		printf("%d %d %d. I will make it!\n",h,m,s);
	}
	else
	{
		printf("%d %d %d. I will be late!\n",h,m,s);
	}
	}

}
