#include <stdio.h>
#include <string.h>
int main()
{
	char hate[]=" 019-7 7 7 7 7";
    int N=1,s=0;
	for(int i=0;i<10;i++)
	{
		
		printf("%c%c",hate[s],hate[N]);
		N=N+2;
		s=s+2;
		printf("\n");
	}

}

