#include<stdio.h>

int main(){
    //auto: default storage for all local variables (created & destroyed automatcally)
    auto int localnum = 42;

    //register: hints to the CPU to keep 'i' in a fast processor register instead of RAM
    //(Note: you cannot use &i on a register variable)
    register int i;
    int sum = 0;
    for(i=1;i<=5;i++){
        sum += i;
    }
    //volatile: tellls the compiler "do NOT optimize this variable-hardware/sensors may change it eternally"
    volatile int sensorstatus = 1;
    if(sensorstatus ==1){
        printf("Local: %d|Loop Sum: %d | Sensor Active!",localnum, sum);

    }
    return 0;
}