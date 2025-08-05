
// input 4
// output 4 3 2 1
#include<stdio.h>

int Addition(int iNo)
{ 
    int iSum=0;
    int iCnt=1;
    while( iCnt<=iNo )
    {
        iSum=iSum+iCnt;
        iCnt++;
    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number:\n");
    scanf("%d",&iValue);
    iRet=Addition(iValue);
    printf("Addition is: %d\n",iRet);
    return 0;
}