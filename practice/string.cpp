#include<stdio.h>//ask teacher 
int main(){

    char str[100000];
    scanf("%s", str);    
    
    for(int i = 0; str[i] != '\0'; ++i)  
    printf("%c", str[i] - 7);
       
    return 0;
}
 
