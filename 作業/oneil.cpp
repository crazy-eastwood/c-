#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i;
	char arr[1000];
	gets(arr);
	for(i=0;i<strlen(arr);i++)
	{
		if(arr[i]!=arr[strlen(arr)-1])
		{
			printf("no");
			break;
		}
	    else{
	    	printf("yes");
	    	break;
		}
	}
	return 0; 
	 
}
