#include <stdio.h>
#include <stdlib.h>
int main()
{
	long long N,i,a,b,c;
	scanf("%lld",&N);
	for(i=0;i<N;i++)
	{   scanf("%lld%lld%lld",&a,&b,&c);
		switch(a){
			case 1:
				printf("%lld\n",b+c);
				break;
			case 2:
				printf("%lld\n",b-c);
				break;
			case 3:
				printf("%lld\n",b*c);
				break;
			case 4:
				printf("%lld\n",b/c); 
		    	break;
		}
	
	}
	return 0;
}

