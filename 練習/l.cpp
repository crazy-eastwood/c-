#include <stdio.h>
#include <stdlib.h>
int main()
{
	int X;


	scanf("%d",&X);
			if(X%5==0)
	{
		printf("U"); //(U)(G) (Y)(T)(I)
	}
	else if(X%5==1)
	{
		printf("G");
	}
	else if(X%5==2)
	{
		printf("Y");
	}
	else if(X%5==3)
	{
		printf("T");
	}
	else if(X%5==4)
	{
		printf("I");
	}
	

}
