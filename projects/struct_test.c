#include<stdio.h>
#include<string.h>
//defining the struct function
typedef struct{
    int rollno;
    char name[50];
    float marks;
}student;
//defining the addbounce function
void addbouns(student *s){
    s->marks += 5;//or (*s).marks += 5
}
//on to the main 
int main()
{
    int i,n;
     //number of students the struct can take 
    student s[100];
    FILE *fp;
    //getting the number of students that are there
    printf("Enter the number of students: ");
    scanf("%d",&n);
    printf("\n   Enter the student details   \n");
    fp = fopen("records.txt", "w");
    if(fp == NULL){
        printf("Error opening/creating the file");
    }
    for(i=0;i<n;i++){
        printf("\nStudent %d:\n ",i+1);

        printf("Rollnumber: ");
        scanf("%d",&s[i].rollno);
    
        printf("Name: ");
        scanf(" %[^\n]",s[i].name);

        printf("Marks: ");
        scanf("%f",&s[i].marks);
        addbouns(&s[i]);
        fprintf(fp, "%d|%s|%f\n",s[i].rollno,s[i].name,s[i].marks);
    }
     fclose(fp);
    
    printf("Document successfully created");
    //strcpy(s1.name,"Ernest"); this is if the user is not asked for input 
    fp = fopen("records.txt","r");
    if(fp == NULL){
        printf("Error reading the file");
    }
    //Output for the work
    printf("\n============================================================\n");
    printf("                            STUDENT RESULTS                    \n");
    printf("\n=============================================================\n");
    printf("rollno\tName\t\t\tmarks\n");
    printf("----------------------------------------------------------------\n");
        while(fscanf(fp, "%d|%49[^|]|%f\n",&s[i].rollno,s[i].name,&s[i].marks) != EOF)
        {
        printf("%d\t%-20s\t%.2f\n",s[i].rollno,s[i].name,s[i].marks);
        i++;
        }
    fclose(fp);
    return 0;

}
