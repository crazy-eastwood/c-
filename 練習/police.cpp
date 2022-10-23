#include <stdio.h>
#include <stdlib.h>
int main()
{
	int score,good=0,n=0;
	while(scanf("%d",&score)!=EOF)
	{
		good=score+good;
		
		
		n++;
	
	}
	printf("%d",good/n);
	system("PAUSE");
}
