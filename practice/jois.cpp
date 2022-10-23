#include <stdio.h>
#include <stdlib.h>
int main()
{
	int mm,dd;
	scanf("%d%d",&mm,&dd);
	if(mm==7&&30<=dd<60||7<mm<17)
	{
		printf("At School");
	}
	else{
		printf("Off School");
	}
	
}
