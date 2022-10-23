#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d %d %d\n",a,b,c);
	if(a+b<=c)
	{
		printf("NO");
	}
	else if(a*a+b*b<c*c)
	{
		printf("Obtuse");
	}
	else if(a*a+b*b==c*c)
	{
		printf("Right");
	}
	else if(a*a+b*b>c*c)
	{
		printf("Acute");
	}
} 
