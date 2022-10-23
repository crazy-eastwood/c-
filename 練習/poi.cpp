#include <stdio.h>
#include <stdlib.h>
int main()
{
     int N;;
	int k=4-1,p=4-(4-1);
	for(int i=0;i<4;i++)
	{
		for(int l=0;l<k;l++)
		{
			printf(" ");
		}	
	for(int u=0;u<p;u++)
	{
		printf("*");
	
		
	}
	for(int y=0;y<k;y++)
	{
		printf(" ");
		}
		printf("\n");
		p=p+2;
			k=k-1;

	}
	for(int i=0;i<5;i++)
	{
		printf("   *\n");
	}
}
