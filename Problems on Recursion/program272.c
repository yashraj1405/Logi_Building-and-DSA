

#include<stdio.h>

void DisplayR(int iNo)
{
    static int iCnt=0;   
    
    if( iCnt<=iNo )
    {
        printf("* \n");
        iCnt++;
        DisplayR(iNo);  //Recursive call 
    }
}

int main()
{
    int iValue=0;
    printf("enter frequency:\n");
    scanf("%d",&iValue);
    DisplayR(iValue);
    printf("end of main\n");


    return 0;
}