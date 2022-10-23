#include <stdio.h>
#include <string.h>
int main()
{
	char arr[100];
    fgets(arr,100,stdin);
	for(int i=0;i<strlen(arr)-2;i++)
	{
		printf("%c%c",arr[i],'-');
	}
	printf("%c",arr[strlen(arr)-2]);
	return 0;
}
