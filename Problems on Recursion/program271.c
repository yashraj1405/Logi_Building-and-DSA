

#include<stdio.h>

void DisplayI(int iNo)
{
    int iCnt=0;   
    if( iCnt<=iNo )
    {
        printf("* \n");
        iCnt++;
        DisplayI(iNo);  //Recursive call 
    }
}

int main()
{
    int iValue=0;
    printf("enter frequency:\n");
    scanf("d",&iValue);
    DisplayI(iValue);
    


    return 0;
}