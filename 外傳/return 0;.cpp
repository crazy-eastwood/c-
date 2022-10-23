#include <stdio.h>
#include <stdlib.h>
int main()
   
    
{   int i,t,y,n,z;
     t=2; 
     printf("You have 1000$ mice moneny\n");
	 printf("Before you played yet,I have to tell you that if you died  two time this game will explode,and when you died and alive again your moneny will be zero,and please enjoy the game\n"); 
     system("PAUSE"); for(i=0;i<t;i++){ 
   printf(" Giant:your dead\n");
   printf(" Mickey:why?\n");
   printf("Giant:Because I stabbed you\n");
   printf(" Mickey:oh no\n");
   system("PAUSE");
   printf(" Mickey:Why do you stabbed me? \n");
   printf("Giant: Because I don't like you \n");
   printf("Mickey: I don't like you,but I never try to kll you\n");
   printf("Giant:Thats because you can't hurt or even kill me.HA HA HA !!!\n");
   system("PAUSE");
   printf("Anyway you can't talk now,Because you are taped and your hands and legs are tied to a catus\n");
   printf("Giant:I am going to leave you here to die,Oh I am sure I am going find your little friends and kill them HA HA HA!\n");
   printf("Giant left....\n");
   printf("What are you going to do now?\n");
   printf ("You could cut your rope with the catus or pull the rope\n");
   printf(" cut your rope with the catus=1, pull the rope=0\n");
   printf("PLEASE put in a number\n");
   scanf("%d",&y);
    if(y==1)
    {
   	printf("You finally cut through it!\n");
   	printf("Where would you go?\n");
   	printf("You see a sign said :north===>dragon city,Reptiles city,Dinosaur city,south===>train station,airport,east===>rats city,farm animals city,west===>Human city");
   	printf("Go north=1,Go south=2,Go east=3,Go west=4");
   	printf("Where would you go?\n");
   	printf("PLEASE put in a number!!");
	scanf("%d",&n);
	if(n==1){
		printf("You are traveling north right now\n");
		printf("You see lots of trees and rocks around you\n");
		printf("You kept on walking you found a purple dragon\n");
		printf("Dragon :Welcome to DRAGON CITY !\n");
		printf("Dragon :If you want a ride please go and find YOlk Dragon,I think he is at more north inside a cave \n");
		printf("Do you want to have a ride?,but becareful you are hungry and thirsty and sleepy if you keep walking you might pass out or even die!!\n");
		printf("find yolk dragon=1,explore yourself=2\n");
		printf("Please input a number:\n");
		scanf("%d",&z);
		if(z==1)
		{
			printf("You walk 2 kilometer and you see a cave but you pass out.....\n");
			printf("Nearby you there is another dragon and he eats you up\n");
			printf("GG\n");if(i==1){
		printf("Explode!!!");}
		}
		else if(z=2)
		{
			printf("You are exploring Dragon city your self you found a hotel !\n ");
		}break;
	} 
    else if(n==2){
	  printf("You are traveling south right now\n");//unfinished
	 } 
	 else if(n==3)
	 {
	 	printf("You are traveling east right now\n");//unfinished
	  } 
	  else if(n==4)
	  {
	  	printf("You are traveling west right now\n");//unfinished
	   } 
	}
  	else if(y==0)
	{
		printf("The catus roots are too deep,you don't have enough stregth and you are super thirsty,so you pass out");
	    printf("you saw your friends infront of you and they are calling 911\n");
		printf("You are so lucky,but you pass out again\n");
		system("PAUSE");
		printf("You been carry away to a hospital,and they give you a medicine,so you are awake now\n");
		printf("your friends are not around your bed,and you ask the nurse if they been here, and the nurse said yes but a huge doctor rush them out the hospital\n ") ;
		printf("And the weird thing is that the doctor never came back,and I never saw him before\n");
		break;//unfinished
	}
	 else 
	{
      printf("GG\n") ;	if(i==1){
		printf("Explode!!!");
	}
	}  

	} 
   
   return 0; 
 } //unfinish great game 
