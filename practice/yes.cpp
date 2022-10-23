#include <stdio.h>
int main()
{
	int k;
	scanf("%d",&k);
	if(k%3==0)
	{
		printf("%d",k/3);
	}
	else if(k%3!=0)
	{
		printf("%d",k/3+1);
	}
}
