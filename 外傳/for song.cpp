#include <stdio.h>//ask teacher how to go to the next line
#include <string.h>
#include <math.h> 
#include <stdlib.h>
int main()
{	
	char song[]="�R�H�P��,ù�j�� �G�m,���ҥ�";
	for(int i=0;i<30;i++)
	{
		printf("%c",song[i]); 
		if(song[i]==' ')
		{
			printf("\n");
		}
		
	}	
	return 0; 
}
