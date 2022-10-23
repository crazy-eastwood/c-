#include <stdio.h>//what is invalid number
#include <stdlib.h>
int main()
{
	int i;
	int a[]={1,2,3,4,5};
	int *ptr=a;
	
	for(i=0;i<sizeof(a)/sizeof(int);i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
		printf("*(ptr+%d)=%d\n",i,*(ptr+i));
	}
	system("PAUSE");  
	return 0;
}
