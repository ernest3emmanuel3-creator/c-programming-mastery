#include<stdio.h>
int main(){
    char operator;
    double a, b, result;
    printf("\n=============================================\n");
    printf("\n         MENU DRIVEN CALCULATOR              \n");
    printf("\n==============================================\n");
    printf("Enter two numbers: ");
    scanf("%lf %lf",&a,&b);
    printf("select an operator(+,-,/,*): ");
    scanf(" %c",&operator);
    switch (operator)
    {
    case '+':
        result=a+b;
        printf("%.2f + %.2f = %.2f\n",a,b,result);
        break;
    case '-':
        result=a-b;
        printf("%.2f - %.2f = %.2f\n",a,b,result);
        break;
    case '*':
        result=a*b;
        printf("%.2f * %.2f = %.2f\n",a,b,result);
        break;
    case '/':
        if(b != 0){
            result=a/b;
            printf("%.2f / %.2f = %.2f\n",a,b,result);
        }    
        else{
            printf("Error:division by zero is undefined\n");
        }
        break;
    
    default:
        printf("Error:invalid operator\n");
        break;
    }
    return 0;
}