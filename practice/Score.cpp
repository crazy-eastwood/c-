#include <stdio.h>
#include <stdlib.h>
int main()
{
	int q;
	scanf("%d",&q);
	if(0<=q&&q<=10)
	{
		printf("%d",6*q);
	}else if(11<=q&&q<=20)
	{
		printf("%d",(2*q-20)+60); //(q-10)*2+60
	 } 
	 else if(21<=q&&q<40)
	 {
	 	printf("%d", (q-20)+20+60);
	 }
	 else{
	 	printf("%d",100);
	 }
	 return 0; 
 }
