#include<stdio.h>
#include <stdlib.h>
int main()
{
	int i,total;
	for(i=0;i<=10;i++)
	{
		if(i%2)
		continue;
		total=total+1;
	}
	return 0;
}
