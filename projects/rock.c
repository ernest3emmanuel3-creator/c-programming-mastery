#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    char ch;
    int choice1;
    int p1 = 0 , p2 = 0;
    int dr = 0;
   
    printf("\n------ROCK-PAPER-SCISSORS-------\n");
    do{
    printf("let the games begin\n");
    printf("\n1.ROCK\n2.PAPER\n3.SCISSORS\n");
    printf("Enter your choice (1 OR 2 OR 3): ");
    int choice2 = (rand() % 3) +1; 
    if(scanf(" %d",&choice1) != 1 || choice1<1 || choice1>3){
        printf("erorr:please enter valid choices!\n");
        return 1;
    }else
    {
        printf("the computer choose %d\n",choice2);
            if(choice1 ==choice2){
                printf("DRAW\n");
                dr++;
            }
            else if(choice1==1 && choice2==2 || choice1==2 && choice2==3 || choice1==3 && choice2==1){
                    printf("Computer 2 wins\n");
                    p2++;
        
            }else
            {
                printf("You won\n");
                p1++;
            }
}

            printf("again y/n\n");
            scanf(" %c",&ch);  
    }while(ch == 'y' || ch=='Y'); 
printf("score is You = %d and computer = %d and DRAWS = %d\n", p1,p2,dr);
return 0;   
}