#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,a,x;
    scanf("%d",&n);      //x
    int num[n];//I give up x(
    for(int i=0;i<n;i++)   
    {
        scanf("%d",&num[i]);
        printf("%d\n",num[i]);
    }
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(x==num[i])
        {
            printf("找到了\n");
            x = -777;
        } 
    } if (x != -777) {
        printf("找不到了\n");
    }
   

}
