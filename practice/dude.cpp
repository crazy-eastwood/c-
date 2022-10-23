#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num=10;
	int *ptr_num;
	
	printf("num=%d &num=%p\n",num,&num);
	ptr_num=&num;
	printf("*ptr_num=5d ptr_num=5p &ptr_num=%p\n",*ptr_num,ptr_num,&ptr_num);
	system("PAUSE");
	return 0; 
}
