#include <stdio.h>
#include <stdlib.h>
int main() 
{ 
   int i,p,n,num,num1,num2;
   num=0,num1=0,num2=0; 
    scanf("%d",&n);
  
   for(i=0;i<n;i++)
   {
        scanf("%d",&p);
	    if(p%3==0)
	    { 
			++num;
	    }
	    else if(p%3==1)
	    {
	    	++num1;
	    } 
	     else if(p%3==2)
	    {
	    	++num2;
	    } 
    } 
    printf("%d %d %d",num,num1,num2);
     return 0; 

}
