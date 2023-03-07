#include <stdio.h>
int main()
{
    /* int day;
     printf("Enter day is :");
     scanf(" %d",&day);
     int month;
     printf("Enter month is :");
     scanf("%d",&month);
     int year;
     printf("Enter year is :");
     scanf("%d",&year);
     printf("(Day- %d Month- %d Year- %d)",day,month,year);*/
    int day, month, year;
    printf("Enter date in DD/MM/YYYY format");
    scanf("%d/%d/%d", &day, &month, &year);
    printf("Day - %d , Month - %d , Year - %d" , day, month, year);
    return 0;
}