#include<stdio.h>

void DisplayTimetable(int iStd)
{
    switch(iStd)
    {
        case 8:
            printf("your exam is at 9.30 AM\n");
        

        case 9:
            printf("Your Exam is at 10.30 AM\n");
            

        case 10:
            printf("Your Exam is at 11.30 AM");  
              
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