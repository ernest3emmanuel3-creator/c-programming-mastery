#include<stdio.h>
int main(){
int arr[100],i,n,largest;
printf("Enter number of elements(1 to 100): ");
scanf("%d",&n);
printf("Enter %d elements: \n",n);
for(i=0;i<n;i++){
    printf("Element[%d]: ",i+1);
    scanf("%d",&arr[i]);
}
largest = arr[0];
for(i=1;i<n;i++){
    if(arr[i] > largest){
        largest = arr[i];
    }
}
printf("\nThe largest element in the array is %d\n",largest);

return 0;

}