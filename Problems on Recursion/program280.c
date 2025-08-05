#include<stdio.h>

int CountDigitsI(int iNo)
{ 
    int iCount=0;
    
    while(iNo!=0 )
    {
        iCount++;
        iNo=iNo/10;
    }
    return iCount;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number:\n");
    scanf("%d",&iValue);
    iRet=CountDigitsI(iValue);
    printf("Number of digits are: %d\n",iRet);
    return 0;
}