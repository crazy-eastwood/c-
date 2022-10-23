#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x,y,z;
	int res1,res2;
	x=2;
	y=5;
	z=10;
	res1=x+y*x-z/x;
	res2=(x+y)*(x-(z/x));
	printf("res1=%d\n",res1);
	printf("res2=%d\n",res2);
	return 0;


}
