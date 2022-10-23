#include <stdio.h> 
#include <stdlib.h>
int main()
{
	int a;
	int b;
	printf("a=?\n");
	scanf("%d",&a);
	printf("b=?\n") ;
	scanf("%d",&b);
	if(a==b){	
  printf("a*a=b*b\n");
  printf("So a=b");
 }else if(b>a){
 	printf("b>a");
 }
 else{
 	printf("b<a");
 }
  system("PAUSE");
  return 0; 
}
