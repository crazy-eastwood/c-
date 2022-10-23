#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,p=0,m;
	scanf("%d%d",&a,&b);
	m=b-a+1;
	for(int i=0;i<m;i++)
	{
		if(a%4==0&&(a%400==0||a%100!=0))
		{
			p++;
		}
		a++;
	}
	printf("%d",p);
}
