/* Accept the Number from user 
and return summation of it */

#include<stdio.h>

int SumDigits(int iNo)
{
    int iDigit = 0, iSum = 0;

    if(iNo < 0)  // If Input is Neagative
    {
        iNo = -iNo; // Covert it into Positive
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return  iSum; 

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Summation of Digit is :%d",iRet);



    return 0;
}