#include <stdio.h>
#include <stdlib.h>
int main()
{
	long long N,i,a,b,c;
	scanf("%lld",&N);
	for(i=0;i<N;i++)
	{   
		scanf("%lld%lld%lld ",&a,&b,&c);
	   
	    if(a==1)
	    {
	    printf("%lld\n",b+c);
		}
		else if(a==2)
		{
			printf("%lld\n",b-c);
		}
		else if(a==3)
		{
			printf("%lld\n",b*c);
		}
		else if(a==4)
		{
			printf("%lld\n",b/c);
		}
	
	}
	return 0;
}

