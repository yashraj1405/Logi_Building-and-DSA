/*Accept the number from user and display that number
of star on screen*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the Numbers:\n");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}