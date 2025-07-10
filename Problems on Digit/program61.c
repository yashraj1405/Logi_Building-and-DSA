/* Accept the Number from user 
and return summation of it */

#include<stdio.h>

int Reverse(int iNo)
{
    int iDigit = 0, iRev = 0;

    if(iNo < 0)  // If Input is Neagative
    {
        iNo = -iNo; // Convert it into Positive
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;     
        iNo = iNo / 10;
    }
    return  iRev; 

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);

    printf("Reverse Digit is :%d",iRet);



    return 0;
}