#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,d;
	a=1;
	b=++a;
	c=b++;
	d=b--;
	printf("a+b+c+d=%d\n",a+b+c+d);
	system ("PAUSE");
	return 0;
}
