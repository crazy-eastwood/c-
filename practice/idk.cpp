#include <stdio.h>
#include <stdlib.h>
int main()
{
	long long int hassan,enemy;
	
	
     while(scanf("%lld %lld",&hassan,&enemy)==2)
	{
		
		if(hassan==enemy)
	{
		printf("%lld",hassan-enemy);
	}
	else if(hassan>enemy)
	{
		printf("%lld",hassan-enemy);
	}
	else if(enemy>hassan)
	{
		printf("%lld",enemy-hassan);
	}

    printf("\n");
	}

	
	
	return 0;
}
