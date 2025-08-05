#include<stdio.h>

int AdditionR(int iNo)
{ 
   static int iSum=0;
   static int iCnt=1;

    if( iCnt<=iNo )
    {
        iSum=iSum+iCnt;
        iCnt++;
        AdditionR(iNo);
    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number:\n");
    scanf("%d",&iValue);

    iRet=AdditionR(iValue);

    printf("Addition is: %d\n",iRet);
    
    return 0;
}
#include<stdio.h>

int AdditionR(int iNo)
{ 
   static int iSum=0;
   static int iCnt=1;

    if( iCnt<=iNo )
    {
        iSum=iSum+iCnt;
        iCnt++;
        AdditionR(iNo);
    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number:\n");
    scanf("%d",&iValue);

    iRet=AdditionR(iValue);

    printf("Addition is: %d\n",iRet);
    
    return 0;
}