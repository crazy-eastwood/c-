#include <stdio.h>
#include <stdlib.h>
int main()
{
	char  fruit[]="banana";

	for(int i=6;i>=1;i--)
	{
	int num=0;
		for(int y=0;y<i;y++)
		{
			printf("%c",fruit[num++]);
		}printf("\n");
	}
	for(int k=0;k<5;k++)
	{
		int mun=0;
		for(int m=0;m<=k+1;m++)
		{
			printf("%c",fruit[mun++]);
		}
		printf("\n");
	}

	return 0;
}
