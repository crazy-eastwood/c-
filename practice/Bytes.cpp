#include <stdio.h>
#include <stdlib.h>
int main()
{
	short short_num=0;
	int int_num=0;
	long long_num=0;
	printf("Operator sizeof in Byte(s)...\n\n");
	
	printf("Type <char>:%d Byte(s).\n",sizeof(char));
	printf("Type <short>:%d Byte(s).\n",sizeof(short));
	printf("Type <int>:%d Byte(s).\n",sizeof(int));		 printf("Type <char>:%d Byte(s).\n",sizeof(char));
	printf("Type <long>:%d Byte(s).\n",sizeof(long));
	printf("Type <float>:%d Byte(s).\n",sizeof(float));
	printf("Type <double>:%d Byte(s).\n",sizeof(double));
	printf("Type <long double>:%d Byte(s).\n",sizeof(long double));
 	printf("\n");
 	printf("Variable short_num:%d Bytes(s).\n",sizeof short_num);
    printf("Variable int_num:%d Bytes(s).\n",sizeof int_num);
    printf("Variable do_fl:%d Bytes(s).\n",sizeof long_num);
   return 0; 
 
 
 
 } 
