#include <stdio.h> 
#include <stdlib.h>
int main()
{
	int pos=77;
	int neg=-5060;
	printf("|123456789|\n\n");
	
	printf("|%d|\n",pos);
	printf("|%2d|\n",pos); 
	printf("|%8d|\n",pos);
	printf("|%+8d|\n",pos);
	printf("|%+-8d|\n",pos);
	printf("|%-8d|\n",pos);
	printf("|%d|\n",neg);
	printf("|%2d|\n",neg);
printf("|%8d|\n",neg);
	printf("|%-8d|\n",neg);
	system("PAUSE");
	return 0; 
	
	
	}
