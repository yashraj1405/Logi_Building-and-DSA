//Input : 4
//Output :-1 -2 -3 -4

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = -1; iCnt >= -iNo ; iCnt--)
    {
        printf("%d\t",iCnt);
    }
}


int main()
{
    int iValue = 0;
    printf("Enter the Numbers:\n");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}