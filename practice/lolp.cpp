#include <stdio.h>
void bubble(int m[],int s)
{	
	for(int j=s-1;j>0;j--)
	{
		for(int i=0;i<j;i++)
		{	int k=0;
			if(m[i]>m[i+1])
			{
				k=m[i];
				m[i]=m[i+1];
				m[i+1]=	k;		//k=i;
			}							//i=j;
										//j=k;//swap i,j
		}
	}

}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)	
	{
		int a[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		bubble(a,n);
		for(int d=0;d<n;d++)
		{
			printf("%d ",a[d]);
		}
		printf("\n");
	}


}
