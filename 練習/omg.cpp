#include <stdio.h>
#include <stdlib.h>
int main()
{ 
   int i,p,n,u,num,num1,num2;
   num=0,num1=0,num2=0; 
	scanf("%d",&n);
   for(u=0;u<n;u++)
   {
   	scanf("%d",&p);
   }
  
   for(i=0;i<n;i++)
   {  
   
   	if(p%3==0){ 
	   printf("%d",++num); 
   	 }	
	else if(p%3==1)
	 {
	   	printf("%d",++num1);
	 } 
	 else if("p%3==2")
	 {
	 	printf("%d",++num2);
	  } 
	 } 
	 return 0; 
	
} 
