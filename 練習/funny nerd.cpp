#include <stdio.h>
#include <stdlib.h>
int main()
{
	long long int a,b,c;
	int n,f;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		long long int farmer=0,farmer1=0;
	scanf("%d",&f);
	
		for(int i=0;i<f;i++)
		{
			scanf("%lld%lld%lld",&a,&b,&c);
			farmer=a*c;
			farmer1=farmer+farmer1;
			
		}
	printf("%lld\n",farmer1);
		
	
	}
	
}
