#include<stdio.h>
int main(){
    /*int Minute;
    printf("Enter minute is :");
    scanf("%d",&Minute);
    int Hour;
    printf("Enter hours is :");
    scanf("%d",&Hour);
    printf("(HH %d MM %d",Minute,Hour);*/
    int hour , min;
    printf("Enter time in HH:MM format");
    scanf("%d:%d",&hour,&min);
    printf("%d Hours and %d minutes",hour,min);
    return 0;
}