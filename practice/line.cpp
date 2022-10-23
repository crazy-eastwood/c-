#include <stdio.h>
#include <stdlib.h> 
int main()
{
	 int x,X,n;
	int a,b,c,A,B,C,y,Y,z=-9999999;
	scanf("%d%d%d\n",&a,&b,&c);
	scanf("%d%d%d\n",&A,&B,&C);
	scanf("%d\n",&n);
	//n=x+X;
	x=0,X=n;
	for(int i=0;i<n+1;i++)
	{
	
	
		y=a*x*x+b*x+c;
		Y=A*X*X+B*X+C;
			x++;X--;
			//z=y+Y;
			if(z<y+Y)
			{
				z=y+Y;
			}
		
			
	}
	printf("%d",z);


	
}
