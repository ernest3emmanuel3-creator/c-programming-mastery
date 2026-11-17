#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int left = 0,right;
    int isPalindrome = 1;
    printf("Enter a string: ");
    scanf(" %s", str);
    right = strlen(str) - 1;
    while(right > left){
        if(str[left] != str[right]){
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }
    if(isPalindrome){
        printf("\"%s\" is a Palindrome.\n", str);
    }
    else{
        printf("\"%s\" is not a Palindrome.\n", str);
    }
    return 0;
}