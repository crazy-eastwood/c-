#include <stdio.h>
int main()
{
    int a,b,c,k;
    scanf("%d%d%d",&a,&b,&c);//a=9 b10 c=8

    if(a>b)
    {
		k=a;
		a=b;
		b=k;
	}
	if(b>c)
	{
		k=b;
		b=c;
		c=k;
	}
	 if(a>b)
    {
		k=a;
		a=b;
		b=k;
	}
	    printf("%d %d %d\n",a,b,c);
    if(a+b<=c)
    {
        printf("NO");
    }
    else if(a*a+b*b<c*c)
    {
        printf("Obtuse");
    }
    else if(a*a+b*b==c*c)
    {
        printf("Right");
    }
    else if(a*a+b*b>c*c)
    {
        printf("Acute");
    }
    
} 
