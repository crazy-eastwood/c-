#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {    int g=0;
        scanf("%d%d",&a,&b);
        int m=0,r=0;
        for(int i=0;i<b;i++)
        {    
         
                 
        
                for(int h=1;h<a+1;h++)
                {
                    for(int j=0;j<h;j++)
                    {
                        g=h;
                        printf("%d",g);
                    }
                    printf("\n");    
                }
                for(int p=a-1;p>0;p--)
                {
                    for(int f=p;f>0;f--)
                    {
                        r=p;
                        printf("%d",r);
                    }
                    printf("\n");
                }
                
           
        printf("\n");
        }
    }
}
