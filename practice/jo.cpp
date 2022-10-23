#include <stdio.h>
#include <stdlib.h>
int bubble(int *arr,int n)
{	
int k;
	for(int i=n-1; i >= 1; i--)
	{
    	for(int j=0; j < i; j++) 
		{
        	// compare arr[j] with arr[j+1]
        	if(arr[j+1]<arr[j])
        	{	k=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=k;//swap i,j
			}
    	}
	}
}
int min(int a,int b)
{
	return a>b?b:a;
}
int main()
{
	int n;
	int y=-1;
	int j=200;
	scanf("%d",&n);
	int arr[30];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble(arr,n);
	for(int g=0;g<n;g++)
	{
		printf("%d ",arr[g]);
		
	}
	printf("\n");
	for(int i=0;i<n;i++)
	{
		
		if(arr[i]<60)
		{
			y=arr[i];
		}
		else if(arr[i]>=60)
		{
			j=min(arr[i],j);
		}
		
	}	
	 if(y==-1)
	{
		printf("best case\n");
	}
	else
	{
		printf("%d\n",y);
	}
	if(j==200)
	{
		printf("worst case");
	}
	else
	{
		printf("%d",j);
	}
	

}	
