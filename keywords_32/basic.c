#include<stdio.h>
int main(){
    //const: locks the value so it cannot be modified later
    const float TAX_RATE = 0.18f;
    
    //basic types
    int age = 20;
    char grade = 'A';
    double precisePi = 3.4123324545;

    //Integer size & sign modifiers
    short smallnum = -32000;    //2 bytes (smaller range)
    signed int temperature = -14;  //Explicitly allows negatives (default)
    unsigned int score = 4000000000u;  //positives only (doibles max limit)
    long long worldpopulation = 810000000000LL; //8 bytes for massive numbers 

    printf("age: %d | grade: %c | tax: %.3f\n",age,grade,TAX_RATE);
    printf("pi: %.10f | short: %hd | temp: %d\n",precisePi,smallnum,temperature);
    printf("unsigmed score: %u | population: %lld\n",score,worldpopulation);
    
    return 0;
}