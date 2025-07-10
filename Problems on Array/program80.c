#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[],int iSize)
{
    int iSum = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt++];

    }
    return iSum;
}
int main()
{
    int *ptr  = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;
    // Step 1 : Accept the Number of Element from user
    printf("Enter the Number of Elemnts:\n");
    scanf("%d",&iLength);

    //Step 2 : Allocate the memory dynamically
    ptr = (int *)malloc(iLength * sizeof(int));

    //Step 3 : Accept the value and store into the dynamic memory
    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    // step 4 : perform the operation (logic) 
    iRet = Addition(ptr,iLength);

    //  step 5 : Dealloacate the memory
    free(ptr);

    return 0;
}
/*
    Step 1 : Accept the Number of Element from user
    Srep 2 : Allocate the memory dynamically
    Step 3 : Accept the value and store into the dynamic memory
    step 4 : perform the operation (logic) 
    step 5 : Dealloacate the memory
*/