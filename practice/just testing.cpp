#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int a[100];
	for(int i=0;i<2;i++)
	{
		if((a+i)==&a[i])
	{
		printf("WHO\n");
	}
	else
	{
		printf("ME?\n");
	}
	}

}
