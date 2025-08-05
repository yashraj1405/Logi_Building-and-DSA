

#include<stdio.h>

void DisplayI(int iNo)
{
    int iCnt=1; 
     
    while( iCnt<=iNo )
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
}

int main()
{
    int iValue=0;
    printf("enter number:\n");
    scanf("%d",&iValue);
    DisplayI(iValue);
    return 0;
}