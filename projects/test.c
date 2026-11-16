#include <stdio.h>
int calculateSum(int arr[],int size){
    int sum = 0;
    for(int i=0;i<size;i++)
    {
        sum += arr[i];
    }
    return sum;
}
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n * fact(n-1);
}
int main()
{
    //delcaration
    int num[3];
    int m;
    //input of the number
    printf("Enter 3 numbers\n");
    for(int i=0;i<3;i++)
    {
        printf("first number at index %d and position %d\n",i,i+1);
        scanf("%d",&num[i]);
        
       
    }
    //getting the sum of the 3 numbers
    int total = calculateSum(num,3);
    printf("the sum is %d\n",total);
    //input m 
    printf("Enter number you want factorial of: ");
    scanf("%d",&m);
    //calling function to get the factorial for the user's number 
    printf("The factorial of %d is %d\n", m,fact(m));
    return 0;
}