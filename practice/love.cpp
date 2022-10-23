#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int a,b;
	char Free;
	scanf("%d %c %d",&a,&Free,&b);
	switch(Free)
	{
		case '+':printf("%d",a+b);
				break;
		case '-':printf("%d",a-b);
				break;
		case '*':printf("%d",a*b);
				break;
		case '/':printf("%d",a/b);
		break;
		default :break;
		
	}
	return 0;
}
