#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int N;
	int bug[200];

	
		int j=0;
		scanf("%d",&N);
		while(j<N)
		{
			scanf("%d",&bug[j]);
			++j;
		}
		
		for(int k=0;k<j;k++)//99 88 77 66 55
		{
			//printf("%d",bug[k]);
			while(bug[j]!=bug[1])//55 66 77 88
			{
				printf("%d",bug[j]);
				j--;
			}
		}
	
}
