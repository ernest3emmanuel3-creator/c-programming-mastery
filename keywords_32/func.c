#include<stdio.h>

//void: function performs an action and returns nothing 
void trackvisits(){
    //static:keeps its value alive in RAM even after the function finishes
    static int visits = 0;
    visits++;
    printf("Function called %d time(s)\n", visits);

}

//int return type: sends a calculate value back to main()
int add(int a,int b){
    return a+b;
}

int main()
{
    trackvisits(); // 1
    trackvisits(); // 2
    trackvisits(); // 3

    int total = add(15, 25);
    printf("Total: %d\n", total);

    return 0;
}