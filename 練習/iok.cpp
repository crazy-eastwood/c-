#include <stdio.h>
int main()
{
	int N,a=0,b=0,c=0;
	scanf("%d",&N);
	a=N%12;
	b=N/12;
	c=50*b+5*a;
	printf("%d",c);
}
