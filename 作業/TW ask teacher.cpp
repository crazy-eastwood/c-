#include <stdio.h>
#include <stdlib.h>
int main()
{
	 int hourtw;
	 scanf("%d",&hourtw);
	 if(0<=hourtw&&hourtw<15){
	 	printf("%d",hourtw+9);
	 } 
	 
	else if (15<=hourtw&&hourtw<24){ 
	 printf("%d",hourtw-15);
}
	
	 return 0; 
 } 
