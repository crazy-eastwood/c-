#include <stdio.h>
#include <stdlib.h>
int main()
{   
  int i,n,num=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  	printf("%d. I won't say swear words!\n",++num);
  }
  return 0;
}
