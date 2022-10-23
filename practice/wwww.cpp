#incude <stdio.h>
#include <stdlib.h>
int main()
{
	int N,new_weight,weight;
	scanf("%d",&N);
	new_weight = weight > 50 ? weight - 1 : weight;
	printf("%d",new_weight);
}

