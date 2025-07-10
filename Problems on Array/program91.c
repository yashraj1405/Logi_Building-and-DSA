#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;
   
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
       if(Arr[iCnt] == iNo)
       {
            bFlag = true;
            break;
       }

    }
    return bFlag;
   
}
int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iValue = 0;
    bool bRet = 0;
    printf("enter number of elements: \n");
    scanf("%d",&iLength);

    ptr=(int*)malloc(iLength*sizeof(int));

    printf("enter the elements: \n");
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("enter the number that you want to search: \n");
    scanf("%d",&iValue);
   
    bRet=Search(ptr,iLength,iValue);
    if(bRet == true)
    {
        printf("element is present: \n");
    }
    if(bRet == false)
    {
        printf("element is not present: \n");
    }
    
    free(ptr);
    return 0;
}

