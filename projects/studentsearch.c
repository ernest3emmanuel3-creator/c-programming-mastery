#include<stdio.h>
int main(){
    int i,n,search_id,found=0;
    //getting number of students
    printf("Enter number of students:\n");
    scanf("%d",&n);
    int addimision_numbers[n];
    //getting addimision_numbers of students
    printf("Enter addmision numbers of students:\n");
    for(i=0;i<n;i++){
        printf("student %d", i+1);
        scanf("%d",&addimision_numbers[i]);
    }
    //searching for a student using addimision number
    printf("\nEnter the addimision number of the student:\n");
    scanf("%d", &search_id);
    for(i=0;i<n;i++){
       if(addimision_numbers[i]==search_id){
        printf("\nFound student at position %d\n",i+1);
        found = 1;
        break;
       } 
    }
       //Only print not found if the entire loop finished without finding a match
       if(!found){
        printf("\nStudent not found\n");
       }
    return  0; 
    }
    
