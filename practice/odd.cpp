#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int N,a,b,c=2,p,d=1,q=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d%d",&a,&b);
        p=(b-a)/c;
        for(int i=0;i<p;i++)
        {
        	
        	q=q+(a+d*c);
        	++d;
		}
        

    }
    printf("Case %d: %d",N,a+q);

}
