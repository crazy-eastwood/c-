#include <stdio.h>
int main()
{
	char str[1000];
	gets(str);
	printf("%s %s",str,str);
	return 0;
}
