#include <stdio.h>
int max(int,int);
int main() 
{
 int n,ans=0;
 for(int i=0;i<n;i++)
 {
 	 long long y;
 int z=0;
 scanf("%lld",&y);
while (y > 0) {
    z=z*10+y%10;
y /= 10;
 }
 ans=max(ans,z);
 
 }
return 0;
}
int max(int x,int y)
{
	if(x>y)
	return x;
	else
	return y;
}

 
