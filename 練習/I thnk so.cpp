#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	int temp;
	int a=0;
	int b=0;
	int c=0;
	int i; 
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		scanf("%d",&temp);
		if (temp%3==0)
		{
			a++;	
		 } 
		else if(temp%3==1)
		{
			b++;
		 } 
		else
		{
			c++;
		 } 
	}
	printf("%d %d %d",a,b,c);
	return 0; 
}


