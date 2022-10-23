#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num=1,mun=1;
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			printf("%d*%d=%d ",num,mun,num*mun);
			mun++;
		}
		printf("\n");
		num++;
		 mun=1;
		
	}
}

