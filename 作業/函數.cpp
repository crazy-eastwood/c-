#include <stdio.h>
#include <stdlib.h>
//�禡�ŧi 
int GCD(int,int);
int main()
{
	int a,b,i;
	scanf("%d %d",&a,&b);
	printf("%d",GCD(a,b));
	//printf("%d",(a*b)/GCD(a,b)); // �̤j���]��*�̤p������ = ��Ƥ����n gcd*lcm = a*b
	return 0;
}
//��ƹ�@
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
