#include<stdio.h>
int main(){
int i, j, rows, cols;
int Sum[10][10], A[10][10], B[10][10];
printf("Enter the number of rows and columns, max is 10: ");
scanf("%d %d",&rows ,&cols);
printf("\nEnter values of matrix A: \n");
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        printf("A[%d][%d]: ",i,j);
        scanf("%d",&A[i][j]);
    }
}
printf("Enter values of matrix B: \n");
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        printf("B[%d][%d]: ",i,j);
        scanf("%d",&B[i][j]);
    }
}
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        Sum[i][j] = A[i][j] + B[i][j];
    }
}
printf("sum of matrix A and B\n");
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        printf("%d\t",Sum[i][j]);
    }
    printf("\n");
}
return 0;
}