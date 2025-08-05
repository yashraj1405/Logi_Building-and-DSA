
// input 4
// output 4 3 2 1
#include<stdio.h>

void DisplayI(int iNo)
{
    
     
    while( iNo>=1 )
    {
        printf("%d\n",iNo);
        iNo--;
        
    }
}

int main()
{
    int iValue=0;
    printf("enter number:\n");
    scanf("%d",&iValue);
    DisplayI(iValue);
    printf("end of main\n");
    return 0;
}