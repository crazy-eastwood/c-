#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char number[100];//12345
	scanf("%s",number);
	for(int i=strlen(number)-1;i>=0;i--)
	{    
		if(number[i]=='0')
		{
			printf("");
		}
		printf("%c",number[i]);
	}
	return 0;
}
