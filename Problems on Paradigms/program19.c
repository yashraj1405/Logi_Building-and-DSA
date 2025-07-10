#include<stdio.h>

void DisplayTimetable(int iStd)
{
    if(iStd == 8)
    {
        printf("your exam time is at 9.30 AM ");
    }
    else if(iStd == 9)
    {
        printf("your exam time is at 10.30 AM");
    }
    else if(iStd == 10)
    {
        printf(" your exam time is at 11.30 AM");
    }
}
int main()
{
    int iValue = 0;
    printf("Please Enter your Standard :\n");
    scanf("%d",&iValue);

    DisplayTimetable(iValue);

    return 0;
}