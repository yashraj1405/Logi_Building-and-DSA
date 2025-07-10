/*Return Maximum Value From Input*/
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize)
{
    int iCnt = 0, iMax = 0;
    iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }

    }
    return iMax;
}
int main()
{
    int *ptr  = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;
   
    printf("Enter the Number of Elemnts:\n");
    scanf("%d",&iLength);

     
    ptr = (int *)malloc(iLength * sizeof(int));

    
    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
 
    iRet = Maximum(ptr,iLength);
    printf("Maximum is : %d\n",iRet);

    
    free(ptr);

    return 0;
}
 