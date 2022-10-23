#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i=1,ans=0;
	while(i<=99)
	{
		ans=ans+i;
		i=i+2;
	}
	printf("%d",ans);
	return 0;
}
