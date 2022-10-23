#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,Ans;
	a=1;
	b=2;
	c=3;
	Ans=a/b+c/b-(!(a&&b)? 0:1)+(c+c+a)%b;
	printf("%d",Ans);
	
	return 0;
}
