#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int id;
    char name[50];
    float salary;
}Employee;
int main(){
    FILE *fp;
    Employee emp;
    char choice;
    fp = fopen("emp.txt.doc", "w");
    if(fp == NULL){
        printf("There was an error creating the file!\n");
        exit(1);
    }
    printf("---Enter details of Employee---\n");
    do{
        printf("ID: ");
        scanf("%d",&emp.id);
        printf("Name: ");
        scanf(" %[^\n]s",emp.name);
        printf("Salary: ");
        scanf("%f",&emp.salary);
        fprintf(fp, "%d | %s | %.2f\n",emp.id,emp.name,emp.salary);
        printf("Do you want to add another Employee:y/n\n");
        scanf(" %c",&choice);
    }while(choice == 'y' || choice == 'Y');
    fclose(fp);
    printf("\ninformation was add successfully\n");
    fp = fopen("emp.txt.doc","r");
    if(fp != NULL){
    char line[150];
    while(fgets(line, sizeof(line),fp) != NULL){
        printf("%s",line);
    }
        fclose(fp);
        }
return 0;
}