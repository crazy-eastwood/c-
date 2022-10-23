#include <stdio.h>
#include <stdlib.h>
int main()
{
	char ch;
	printf("press 'Q' or 'q' to quit \n");
	while((1))
	{
		ch=getch();
		();
		if((ch=='Q')||(ch=='q'))
		{
			printf("\nQuit!\n");
		}
		printf("Key <%c>continued...\n",ch);
	}
	printf("Bye bye !\n");
	return 0;
}
