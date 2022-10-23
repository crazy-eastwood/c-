#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<25)
	{
		printf("%d",25-n);
	}
	else if(n>25){
		printf("%d",60-n+25);
	}
	else{
		printf("0");
	}
}
