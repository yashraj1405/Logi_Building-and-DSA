// * * * *

#include<stdio.h>

void DisplayR()
{
    int iCnt=1;   // storage class auto
    
    if( iCnt<=4 )
    {
        printf("* \n");
        iCnt++;
        DisplayR();  //Recursive call 
    }
}

int main()
{
    DisplayR();
    return 0;
}