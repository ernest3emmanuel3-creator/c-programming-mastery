#include<stdio.h>
int main(){
    int choice = 2;
    int marks = 78;
    
    //if &else 
    if(marks >= 50){
        printf("Result:Passed\n");
    }
    else{
        printf("Result:Failed\n");   
    }

    //switch , case, default: clean multi-option menu
    switch (choice)
    {
    case 1:
        printf("Selected: withdraw cash\n");
        break; // prevents falling through to case 2
    case 2:
        printf("selected: check balance\n");
    default:
    printf("selected: invalid option\n");
        break;
    }
    return 0;
}