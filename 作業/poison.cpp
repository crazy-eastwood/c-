#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,p=0;
	scanf("%d%d",&a,&b);
	for(int i=0;i<b-a+1;i++)
	{
		if(a%4==0&&(a%400==0||a%100!=0))
		{
			p++;
		}
		a++;
	}
	printf("%d",p);
}
