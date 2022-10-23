#include <stdio.h>
#include <stdlib.h>
//ㄧΑ 
int GCD(int,int);
int main()
{
	int a,b,i;
	scanf("%d %d",&a,&b);
	printf("%d",GCD(a,b));
	//printf("%d",(a*b)/GCD(a,b)); // 程そ计*程そ计 = ㄢ计ぇ縩 gcd*lcm = a*b
	return 0;
}
//ㄧ计龟
int GCD(int a,int b) // gcd(3,2) => gcd(2,3)
{
	if(a>b)
	{
		return GCD(b,a); 
	}
	else
	{
		if(b % a == 0)
		{
			return a;
		}
		else
		{
			return GCD(a,b%a);	
		}	
	}
}
