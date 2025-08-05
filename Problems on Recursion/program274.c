

#include<stdio.h>

void DisplayR(int iNo)
{
   static int iCnt=1; 
     
    while( iCnt<=iNo )
    {
        printf("%d\n",iCnt);
        iCnt++;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue=0;
    printf("enter number:\n");
    scanf("%d",&iValue);
    DisplayR(iValue);
    printf("end of main\n");
    return 0;
}