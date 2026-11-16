#include<stdio.h>

//extern: tells C thet 'maxconnections' already exists another .c file
extern int maxconnections;

int main(){
    printf("Max allowed connections from config.c: %d\n", maxconnections);
    return 0;
}