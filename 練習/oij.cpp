#include <stdio.h>
#include <stdlib.h>
int max(int,int);
int main()
{
	int i,j;
	while(scanf("%d%d",&i,&j)!=EOF)
	{ 
	 	int n=0,m=0,k=0;
	 	
		printf("%d %d",i,j);
		if(i>j)
		{
			k=i;
			i=j;
			j=k;
		}
		while(i<=j)
		{ 
			int b=0;
			if(i%2==1)
			{
				n=3*i+1;
			}
			else
			{
				n=i/2;
			}
			while(n!=1)
			{
				
				if(n==1)
				{
					break;
				}
				if(n%2==1)
				{
					n=3*n+1;
				}
				else
				{
					n=n/2;
				}
				b++;
			}
			m=max(m,b);
			i++;
		}

		printf(" %d\n",m+2);
	}
}
int max(int poo,int idk)
{
	if(poo>idk)
	{
		return poo;
	}
	else if(poo<=idk)
	{
		return idk;
	}
}
