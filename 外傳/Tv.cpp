#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,N=200;

    while(1)
    {
        scanf("%d%d",&a,&b);
        if(a==-1||b==-1)
        {
            break;

        }
        else if(a-b>=50)
        {
            printf("%d",100-a+b);


        }
        else if(b-a>=50)
        {
            printf("%d",100-b+a);

        }
        else if(a>b&& a-b<=50)
        {
            printf("%d",a-b);

        }
        else if (b>a&&b-a<=50)
        {
            printf("%d",b-a);

        }
        else if(a==b)
        {
            printf("%d",0);

        }
        printf("\n");
    }
    return 0;
}
