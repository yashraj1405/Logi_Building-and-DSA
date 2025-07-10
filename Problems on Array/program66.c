//sum of elements in array

#include<stdio.h>

int main()
{
    int Arr[4];
    int iCnt = 0;
    int iSum = 0;

    printf("Please Enter the Value :\n");

    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
     //     1        2        3
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        iSum = iSum + Arr[iCnt]; //4
    }
     
    printf("Addition is :%d\n",iSum);
    
    return 0;
}