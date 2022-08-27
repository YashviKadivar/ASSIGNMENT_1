/* WAP  to take date as an input in below given format and convert the date format and display the result as given below.

user input date format-"DD/MM/YYYY" (27/11/2022)

output format-"Day - DD,Month - MM,Year - YYYY"(Day - 27,Month - 07,Year - 2022) */

#include<stdio.h>

int main()
{
    int date,month,year;

    printf("\n enter date ");
    scanf("%d/%d/%d",&date,&month,&year);

    printf("Day - %d,Month - %d,Year - %d",date,month,year);

    return 0;
}
