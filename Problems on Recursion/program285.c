#include<stdio.h>

int CountEvenDigitsR(int iNo)
{ 
    static int iCount=0;
    int iDigit=0;
    if(iNo!=0 )
    {
        iDigit=iNo%10;
        if(iDigit%2==0)
        {
            iCount++;
        }
        iNo=iNo/10;
        CountEvenDigitsR(iNo);

    }
    return iCount;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number:\n");
    scanf("%d",&iValue);
    iRet=CountEvenDigitsR(iValue);
    printf("sum of digits are: %d\n",iRet);
    return 0;
}