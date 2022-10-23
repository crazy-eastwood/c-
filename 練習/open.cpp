#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int Jesus=1,idk=0;
	char phone[50];
	scanf("%s",phone);
	for(int i=0;i<strlen(phone)-1;i++)
	{
	
		printf("%d",abs((int)phone[i]-(int)phone[i+1]));
	}
}
