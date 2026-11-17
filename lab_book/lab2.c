#include<stdio.h>
int main(){
    int n, i = 1;
    unsigned long long factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    if(n < 0){
        printf("Error:factorial of a negative number does not exist.\n");
    }
    else{
        while(i<=n){
            factorial *= i;
            i++;
        }
        printf("Factorial of %d is %llu\n",n,factorial);   
    }
    return 0;
}