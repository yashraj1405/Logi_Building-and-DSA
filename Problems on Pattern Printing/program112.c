//Input : 4
//Output :-4 -3 -2 -1 0 1 2 3 4
//By using only single loop.
//Number line


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
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