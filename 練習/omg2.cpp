#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	int i,a=1;
	char word[1000];
	gets(word);
	for(i=0;i<strlen(word);i++)
	{
		if(word[i]==' ')
		{
			++a;
		}
		
	}
	printf("%d",a);

}
