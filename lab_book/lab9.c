#include<stdio.h>
typedef struct{
    int rollNo;
    char name[50];
    float marks;
}Student;
int main(){
    int n,i;
    Student s[100];
    printf("Enter number of students: ");
    scanf("%d",&n);
    printf("\nEnter the student details: \n");
    for(i=0;i<n;i++){
        printf("\nStudent %d: \n",i+1);
        printf("Rollnumber: ");
        scanf("%d",&s[i].rollNo);
        printf("Name: ");
        scanf(" %[^\n]s",s[i].name);
        printf("marks: ");
        scanf("%f",&s[i].marks);
    }
    printf("\n=======================================\n");
    printf("          STUDENT DETAILS         \n");
    printf("=======================================\n");
    printf("rollno\t name\t\t\t marks\n");
    printf("----------------------------------------\n");
    for(i=0;i<n;i++){
        printf("%d\t%-20s\t%.2f\n",s[i].rollNo,s[i].name,s[i].marks);
    }
    return 0;
}