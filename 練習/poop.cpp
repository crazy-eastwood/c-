#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char num[2000];
	int a=0,b=0,t=0;
	scanf("%s",num);
	for(int i=strlen(num)-1;i>=0;i--)
	{
		if(t%2==0)
		{
		 a=a+num[i]-'0';
		}	
		if(t%2==1)
		{
		  b=b+num[i]-'0';
		}	

		t++;
	}		
	if(a>b)
		{
			printf("%d",a-b);
		}
		else 
		{
			printf("%d",b-a);
		}
}
