#include<stdio.h>
int main()
{
    // for loop + continue +break 
    printf("Od numbers up to 7 skipping 3 : ");
    for(int i = 1;i<=10;i++)
    {
        if(i==3){
            continue;
        }
        if(i==7){
            break;
        }
        if(i%2 != 0){
            printf("%d,",i);
        }
    }
    printf("\n");

    // while loop (checks condition BEFORE running)
    int count = 3;
    while (count > 0)
    {
        printf("countdown: %d\n", count);
        count--;
    }

    //do-while loop (runs atleast once before checking the condition)
    int x = 10;
    do{
        printf("the loop ran once even though x is %d\n",x);

    }while (x < 5);
    
    // goto (jumps directly to a named label - mostly used for error cleanup)
    int error = 1;
    if (error)
    {
        goto cleanup;
    }
    printf("this line is skipped. \n");

    cleanup:
    printf("jumped to cleanup labe; safely. \n");

    return 0;
    
    
}