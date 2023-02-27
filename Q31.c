#include<stdio.h>


struct time_struct
{
    unsigned short int hour;
    unsigned short int minute;
    unsigned short int second;
};

void printTime(struct time_struct * t){
    printf("%hu:%hu:%hu",t->hour,t->minute,t->second);
}
int main(){
    unsigned short int hour;
    printf("enter hour between 0-23 : ");
    scanf("%hu",&hour);
    unsigned short int min;
    printf("enter min between 0-59 : ");
    scanf("%hu",&min);
    unsigned short int second;
    printf("enter second between 0-59 : ");
    scanf("%hu",&second);
    

    struct time_struct t1;
    t1.hour = hour;
    t1.minute = min;
    t1.second = second;

    printTime(&t1);
    return 0;
}